package main
import "fmt"

func main() {
    var N, Q int
    fmt.Scan(&N, &Q)
    Arr := [100]int{}
    for i:=0;i<Q;i++ {
        var k int
        fmt.Scan(&k)
        Arr[k]++
    }
    for i:=0;i<N;i++ { fmt.Println(Arr[i]) }
}
