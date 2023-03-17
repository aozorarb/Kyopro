package main
import "fmt"

func main() {
    var a, b int
    fmt.Scan(&a, &b)
    fmt.Println(map[bool]int{true: a, false: b}[a < b])
}
