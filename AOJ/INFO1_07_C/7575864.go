package main
import "fmt"

func main() {
    var a int
    fmt.Scan(&a)
    if a > 0 {
        fmt.Println(1)
    } else if a < 0 {
        fmt.Println(-1)
    } else {
        fmt.Println(0)
    }
}
