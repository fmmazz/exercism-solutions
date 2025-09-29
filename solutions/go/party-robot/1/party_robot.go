package partyrobot
import "fmt"

// Welcome greets a person by name.
func Welcome(name string) string {
	return fmt.Sprintf("Welcome to my party, %s!", name) 
}

// HappyBirthday wishes happy birthday to the birthday person and exclaims their age.
func HappyBirthday(name string, age int) string {
	return fmt.Sprintf("Happy birthday %s! You are now %d years old!", name, age)
}

// AssignTable assigns a table to each guest.
func AssignTable(name string, table int, neighbor, direction string, distance float64) string {
	var welcomeStr string = fmt.Sprintf("Welcome to my party, %s!\n", name)
    var tableStr string = fmt.Sprintf("You have been assigned to table %.3d. ", table)
    var dirStr string = fmt.Sprintf("Your table is %s, exactly %.1f meters from here.\n", direction, distance)
    var neighborStr string = fmt.Sprintf("You will be sitting next to %s.", neighbor) 
 
	return welcomeStr + tableStr + dirStr + neighborStr
}
