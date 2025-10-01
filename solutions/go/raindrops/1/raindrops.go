package raindrops
import "fmt"

func Convert(number int) string {
	rd := ""
    if number % 3 == 0{
        rd += "Pling"
    }
    if number % 5 == 0{
            rd += "Plang"
        }
    if number % 7 == 0{
            rd += "Plong"
        }
    if len(rd) == 0{
        rd = fmt.Sprintf("%v",number);
    }
	return rd
}
