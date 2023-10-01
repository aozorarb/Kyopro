package main
import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    for i:=0;i<n;i++ {
        var size int
        fmt.Scan(&size)
        for j:=0;j<size;j++ { fmt.Print("#") }
        fmt.Printf(" %d\n", size)
    }
}
