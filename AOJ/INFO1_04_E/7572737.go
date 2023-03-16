package main

import "fmt"

func main() {
	var a, b int = 20, 10
	fmt.Scan(&a, &b)
	fmt.Println(a % b)
}

