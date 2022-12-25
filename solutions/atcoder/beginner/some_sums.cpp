// Atcoder Problem Link: https://atcoder.jp/contests/abs/tasks/abc083_b

#include <iostream>
using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  int res = 0;
  for (int i = 1; i < n + 1; ++i) {
  	int sum = 0;
    int val = i;
    while (val > 0) {
      sum += val % 10;
      val /= 10;
    }
    if (sum >= a && sum <= b) {
      res += i;
    }
  }
  cout << res << endl;
  return 0;
}
