package main
import "fmt"

func main() {
    var n, norma, total int
    fmt.Scan(&n, &norma)
    for i:=0;i<n;i++ {
        var score int
        fmt.Scan(&score)
        total += score
        if(total >= norma) { break }
    }
    fmt.Println(total)
    
}
