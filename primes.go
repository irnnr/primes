package main

import "fmt"
import "math"

func main() {
  upperLimit := 1000000

  for i := 2; i <= upperLimit; i++ {
    if (isPrime(i)) {
      fmt.Println(i)
    }
  }
}

func isPrime(n int) bool {
  sqrtN := int(math.Sqrt(float64(n)))

  for divisor := 2; divisor < sqrtN; divisor++ {
    if n % divisor == 0 {
      return false
    }
  }

  return true
}
