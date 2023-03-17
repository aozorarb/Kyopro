package main
import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    progression := [100]int{}
    for i:=0;i<n;i++ { fmt.Scan(&progression[i]) }
    var k int
    fmt.Scan(&k)
    fmt.Println(progression[k])
}
