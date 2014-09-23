package main

import "fmt"

func main() {
    fmt.Println("Hello, Arch!")
    SendMessage(nil, fmt.Sprintf("welcome %s join\n"))
}