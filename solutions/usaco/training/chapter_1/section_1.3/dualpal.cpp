// USACO Training Pages Problem Link: https://train.usaco.org/usacoprob2?a=b8UFQyElq9t&S=dualpal

#include <bits/stdc++.h>
using namespace std;

int n, s;

string convert(int num, int base) {
  string res = "";
  while (num) {
    res = string(1, '0' + (num % base)) + res;
    num /= base;
  }
  return res;
}

int main() {
  ifstream fin("dualpal.in");
  ofstream fout("dualpal.out");
  fin >> n >> s;
  for (int i = s + 1; n; ++i) {
    int ret = 0;
    for (int j = 2; j <= 10; ++j) {
      string res = convert(i, j);
      string rev = res;
      reverse(res.begin(), res.end());
      if (res == rev) ret++;
    }
    if (ret >= 2) {
      fout << i << '\n';
      n--;
    }
  }
  return 0;
}
