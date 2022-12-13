// Atcoder Problem Link: https://atcoder.jp/contests/abs/tasks/abc085_b

package main

import (
  "fmt"
  "sort"
)

func main() {
  var n int
  fmt.Scan(&n)
  arr := make([]int, n)
  for i := 0; i < n; i++ {
    fmt.Scan(&arr[i])
  }
  sort.Slice(arr, func (i, j int) bool {
  	return arr[i] < arr[j]
  })
  var count int = 1
  for i := 0; i < n - 1; i++ {
    if arr[i] < arr[i + 1] {
      count++;
    }
  }
  fmt.Println(count)
}
