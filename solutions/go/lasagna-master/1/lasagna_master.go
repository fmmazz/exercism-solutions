package lasagna

// TODO: define the 'PreparationTime()' function
func PreparationTime(layers []string, averageTimePerLayer int) int {
    if averageTimePerLayer == 0 {
        averageTimePerLayer = 2
    }
    
    return len(layers) * averageTimePerLayer
}

// TODO: define the 'Quantities()' function
func Quantities(layers []string) (noodles int, sauce float64){
    noodles = 0
    sauce = 0.0
    
    for _, layer := range layers {
        switch layer{ 
            case "noodles":
            	noodles += 50
            case "sauce":
            	sauce += 0.2
        }
    }
    return 
}

// TODO: define the 'AddSecretIngredient()' function
func AddSecretIngredient(friendList []string, recipeList []string) {
    recipeList[len(recipeList) - 1] = friendList[len(friendList) - 1]
}

// TODO: define the 'ScaleRecipe()' function
func ScaleRecipe(amounts []float64, portions int) []float64{
    newAmounts := make([]float64, len(amounts))
    ration := float64(portions) / 2.0

    for i, amount := range amounts{
        newAmounts[i] = ration * amount
    }
    return newAmounts
}

// Your first steps could be to read through the tasks, and create
// these functions with their correct parameter lists and return types.
// The function body only needs to contain `panic("")`.
// 
// This will make the tests compile, but they will fail.
// You can then implement the function logic one by one and see
// an increasing number of tests passing as you implement more 
// functionality.
