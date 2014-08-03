package main

import "fmt"

func main() {
  upperLimit := 1000000

  for i := 2; i < upperLimit; i++ {
    if (isPrime(i)) {
      fmt.Println(i)
    }
  }
}

func isPrime(n int) bool {
  for divisor := 2; divisor < n; divisor++ {
    if n % divisor == 0 {
      return false
    }
  }

  return true
}
