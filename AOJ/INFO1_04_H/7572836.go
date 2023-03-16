package main
import "fmt"

func main() {
    var a, b, c, d, e int
    fmt.Scan(&a, &b, &c, &d, &e)
    fmt.Println(a*(b*b*b) + (c*d)/e - 100)
}
