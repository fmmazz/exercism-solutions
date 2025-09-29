// Package weather provides tools to compute
// the forecast for a location.
package weather

// CurrentCondition represents a the weather condition.
var CurrentCondition string

// CurrentLocation represents a certain location to compute forecast.
var CurrentLocation string

// Forecast returns an string value equal to the forecast for a specific location.
func Forecast(city, condition string) string {
	CurrentLocation, CurrentCondition = city, condition
	return CurrentLocation + " - current weather condition: " + CurrentCondition
}
