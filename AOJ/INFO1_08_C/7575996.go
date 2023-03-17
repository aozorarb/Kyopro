package main
import "fmt"

func main() {
    for {
        var a int
        fmt.Scan(&a)
        if(a == 0) { break }
        fmt.Println(a)
    }
}
