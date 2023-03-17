package main
import "fmt"

func main() {
    var a int
    fmt.Scan(&a)
    if a >= 80 {
        fmt.Println("A")
    } else if a >= 65 {
        fmt.Println("B")
    } else if a >= 50 {
        fmt.Println("C")
    } else if a >= 35 {
        fmt.Println("D")
    } else {
        fmt.Println("F")
    }
}
