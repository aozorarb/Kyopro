package main
import "fmt"

func main() {
    var a int
    fmt.Scan(&a)
    fmt.Println(a == 2 || a == 3 || a == 5 || a == 7)
}
