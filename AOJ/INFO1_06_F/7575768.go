package main
import "fmt"

func main() {
    var a, b, c bool
    fmt.Scan(&a, &b, &c)
    fmt.Println(!(a && b) || c)
}
