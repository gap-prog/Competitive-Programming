// Atcoder Problem Link: https://atcoder.jp/contests/abs/tasks/abc081_a

#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  int count = 0;
  for (int i = 0; i < s.length(); ++i) {
  	if (s[i] == '1') {
      count++;
    }
  }
  cout << count << endl;
}
