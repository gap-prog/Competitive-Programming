// Atcoder Problem Link: https://atcoder.jp/contests/abs/tasks/abc088_b

package main

import (
  "fmt"
  "sort"
)

func main() {
  var (n int)
  fmt.Scan(&n)
  arr := make([]int, n)
  for i := 0; i < n; i++ {
    fmt.Scan(&arr[i])
  }
  sort.Sort(sort.Reverse(sort.IntSlice(arr)))
  a, b := 0, 0
  for i, v := range arr {
    if i % 2 == 0 {
      a += v
    } else {
      b += v
    }
  }
  fmt.Println(a - b)
}
