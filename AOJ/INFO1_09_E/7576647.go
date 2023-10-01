package main
import "fmt"

func main() {
    var N int
    fmt.Scan(&N)
    A := []int{}
    B := []int{}
    for i:=0;i<N;i++ {
        var left, right int
        fmt.Scan(&left, &right)
        if left >= 0 {
            A = append(A, left)
        } else {
            B = append(B, left)
        }
        if right >= 0 {
            A = append(A, right)
        } else {
            B = append(B, right)
        }
    }
    for i:=0;i<N;i++ {
        fmt.Printf("%d %d\n", B[i], A[i])
    }
}
