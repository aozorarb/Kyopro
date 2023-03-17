package main
import "fmt"

func main() {
    var N, Q int
    fmt.Scan(&N, &Q)
    Arr := [100]int{}
    for i:=0;i<Q;i++ {
        var left, right int
        fmt.Scan(&left, &right)
        for l:=left;l<=right;l++ { Arr[l]++ }
    }
    for i:=0;i<N;i++ { fmt.Println(Arr[i]) }
}
