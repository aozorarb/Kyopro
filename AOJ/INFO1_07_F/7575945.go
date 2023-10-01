package main
import "fmt"
import "sort"

func main() {
    var a, b, c int
    fmt.Scan(&a, &b, &c)
 	ds := []int{a, b, c}
    sort.Ints(ds)
  fmt.Println(ds[0])
}
