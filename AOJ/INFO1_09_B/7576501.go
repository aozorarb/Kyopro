package main
import "fmt"

func main() {
    var n, l, r int
    fmt.Scan(&n)
    arr := [100]int{}
    for i:=0;i<n;i++ { fmt.Scan(&arr[i]) }
    fmt.Scan(&l, &r)
    for le:=l;le<=r;le++ {
        fmt.Println(arr[le])
    }
    
}
