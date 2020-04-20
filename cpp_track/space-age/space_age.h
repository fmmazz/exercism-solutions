#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

namespace space_age {

	constexpr double yearInSecondsEarth = 31557600.0;
	constexpr double yearInMercury = 0.2408467;
	constexpr double yearInVenus = 0.61519726;
	constexpr double yearInMars = 1.8808158;
	constexpr double yearInJupiter = 11.862615;
	constexpr double yearInSaturn = 29.447498;
	constexpr double yearInUranus = 84.016846;
	constexpr double yearInNeptune = 164.79132;

	class space_age
	{
	private:
		long long int ageInSeconds; 
	public:
		explicit space_age(long long int sec);
		long int seconds() const;
		double on_earth() const;
		double on_mercury() const;
		double on_venus() const;
		double on_mars() const;
		double on_jupiter() const;
		double on_saturn() const;
		double on_uranus() const;
		double on_neptune() const;
	};

}  // namespace space_age

#endif // SPACE_AGE_H