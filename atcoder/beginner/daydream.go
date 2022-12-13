// Atcoder Problem Link: https://atcoder.jp/contests/abs/tasks/arc065_a

package main

import (
  "bufio"
  "fmt"
  "os"
  "strings"
)

func main() {
  br := bufio.NewReader(os.Stdin)
  str, _ := br.ReadString('\n')
  str = strings.TrimRight(str, "\n")
  words := []string{"dream", "dreamer", "erase", "eraser"}
  var mow string
  for _, wrd := range words {
    if len(wrd) > len(mow) {
      mow = wrd
    }
  }
  for len(str) > 0 {
    find := false
    for _, wrd := range words {
      if strings.HasSuffix(str, wrd) {
        find = true
        str = str[:len(str) - len(wrd)]
        break
      }
    }
    if !find {
      fmt.Println("NO")
      return
    }
  }
  fmt.Println("YES")
}
