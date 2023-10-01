package main
import "fmt"

func main() {
    var cnt, n int
    fmt.Scan(&n)
    for i:=0;i<n;i++ {
        var a int
        fmt.Scan(&a)
        if(a == 0) {
          fmt.Println(cnt)
          cnt = 0 
        } else {
          cnt++ 
        }
    }
}
