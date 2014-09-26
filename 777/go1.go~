package main

import "fmt"

func main() {
    var n float32 = 6
    fmt.Println(factorialRecursively(n))
    fmt.Println(factorialTailRecursively(n,1))
}

//普通递归
func factorialRecursively(n float32) float32 {
    if n == 1 {
        return 1
    }

    return n * factorialRecursively(n-1)
}

//尾递归
func factorialTailRecursively(n float32, acc float32) float32 {
    //0！=1，1！=1，所以这里判断n==0或者n==1都对。
    if n == 0 {
        return acc
    }

    return factorialTailRecursively(n-1, acc*n)
}