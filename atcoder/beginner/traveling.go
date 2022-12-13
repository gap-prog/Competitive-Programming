// Atcoder Problem Link: https://atcoder.jp/contests/abs/tasks/arc089_a

package main

import (
  "bufio"
  "fmt"
  "os"
  "strconv"
)

var s = bufio.NewScanner(os.Stdin)

func rl() int {
  s.Scan()
  n, _ := strconv.Atoi(s.Text())
  return n
}

func abs(num int) int {
  if num < 0 {
    return -num
  }
  return num
}

func main() {
  s.Split(bufio.ScanWords)
  n := rl()
  var m_t, m_x, m_y int
  for i := 0; i < n; i++ {
    t, x, y := rl(), rl(), rl()
    m_t = t - m_t
    m := abs(x - m_x) + abs(y - m_y)
    if (m > m_t) || (m % 2 != m_t % 2) {
      fmt.Println("No")
      return
    }
    m_t = t
    m_x = x
    m_y = y
  }
  fmt.Println("Yes")
}
