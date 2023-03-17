package  main
import "fmt"

func main() {
    var a int
    fmt.Scan(&a)
    fmt.Println(map[bool]string{true: "yes", false: "no"}[a > 0])
}
