#include <bits/stdc++.h>
using namespace std;

int n, height, height_pos, jumps = 0, arr[(int) 10e5 + 9];
stack<pair<int, int>> s;

void solve(int num) {
  int max_num = 0;
  while (arr[num] >= s.top().first) {
    max_num = max(arr[num] - s.top().first + s.top().second, max_num);
    s.pop();
    if (s.empty()) {
      break;
    }
  }
  s.push(make_pair(arr[num], max_num));
  jumps = max(jumps, max_num);
}

int main() {
  cin >> n >> arr[0];
  height = arr[0];
  height_pos = 0;
  for (int i = 1; i < n; ++i) {
    cin >> arr[i];
    if (arr[i] > height) {
      height_pos = i;
      height = arr[i];
    }
  }
  s.push(make_pair(height, 0));
  for (int i = height_pos - 1; i >= 0; --i) {
    solve(i);
  }
  while (!s.empty()) {
    s.pop();
  }
  s.push(make_pair(height, 0));
  for (int i = height_pos + 1; i < n; ++i) {
    solve(i);
  }
  cout << jumps << endl;
  return 0;
}
