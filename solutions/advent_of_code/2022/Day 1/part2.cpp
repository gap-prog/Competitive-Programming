// Advent of Code Problem Link: https://adventofcode.com/2022/day/1

#include <bits/stdc++.h>
using namespace std;

array<int, 3> MAX = {-1, -1, -1};

void mx(int num) {
  if (num > MAX[0]) {
    MAX[2] = MAX[1];
    MAX[1] = MAX[0];
    MAX[0] = num;
  } else if (num > MAX[1]) {
    MAX[2] = MAX[1];
    MAX[1] = num;
  } else if (num > MAX[2]) MAX[2] = num;
}

int main() {
  ifstream fin("input.txt");
  string s;
  int curr = 0;
  while (getline(fin, s)) {
    if (s.empty()) {
      mx(curr);
      curr = 0;
      continue;
    } else curr += stoi(s);
  }
  mx(curr);
  cout << (MAX[0] + MAX[1] + MAX[2]) << '\n';
  return 0;
}
