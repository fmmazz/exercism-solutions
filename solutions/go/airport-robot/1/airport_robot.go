package airportrobot

import "fmt"

type Greeter interface {
    LanguageName() string
    Greet(s string) string
}

func SayHello(n string, g Greeter) string{
    return fmt.Sprintf("I can speak %v: %v", g.LanguageName(), g.Greet(n))
}

type Italian struct {}

func (i Italian) LanguageName() string {
    return "Italian"
}

func (i Italian) Greet(s string) string {
    return fmt.Sprintf("Ciao %v!", s)
}

type Portuguese struct {}

func (p Portuguese) LanguageName() string {
    return "Portuguese"
}

func (p Portuguese) Greet(s string) string {
    return fmt.Sprintf("Olá %v!", s)
}
