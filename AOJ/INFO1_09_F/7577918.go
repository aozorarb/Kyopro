package main
import "fmt"

func main() {
    var N int
    fmt.Scan(&N)
    backet := map[int]bool{}
    for i:=0;i<N;i++ {
        var x int
        fmt.Scan(&x)
        backet[x] = true
    }
    for i:=0;i<1000000;i++ {
        if backet[i] { fmt.Println(i) }
    }
}
