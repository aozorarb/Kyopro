package main
import "fmt"
func main() {
    var A, B int
    fmt.Scan(&A, &B)
    fmt.Println(A - ((A/B) * B))
}
