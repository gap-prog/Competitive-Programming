// Atcoder Problem Link: https://atcoder.jp/contests/abs/tasks/abc085_c

package main

import (
  "fmt"
)

func main() {
  var n, y int
  fmt.Scan(&n, &y)
  for i := 0; i <= n; i++ {
    for j := 0; j <= n - i; j++ {
      k := (n - i - j)
      sum := i * 10000 + j * 5000 + k * 1000
      if sum == y {
        fmt.Println(i, j, k)
        return
      }
    }
  }
  fmt.Println(-1, -1, -1)
}
