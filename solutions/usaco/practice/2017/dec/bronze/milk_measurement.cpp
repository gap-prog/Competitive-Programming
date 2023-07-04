// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=761

#include <bits/stdc++.h>
using namespace std;

vector<string> cows = {"Bessie", "Elsie", "Mildred"};

int main() {
  ifstream fin("measurement.in");
  ofstream fout("measurement.out");
  int N; fin >> N;
  vector<tuple<int, string, int>> changes(N);
  for (int i = 0; i < N; ++i) {
    int day; fin >> day;
    string cow; fin >> cow;
    int change; fin >> change;
    changes[i] = make_tuple(day, cow, change);
  }
  sort(begin(changes), end(changes));
  vector<int> output(3);
  output[0] = output[1] = output[2] = 7;
  int ans = 0;
  vector<string> display;
  for (const tuple<int, string, int> &i: changes) {
    if (get<1>(i) == "Bessie") output[0] += get<2>(i);
    else if (get<1>(i) == "Elsie") output[1] += get<2>(i);
    else output[2] += get<2>(i);
    int mx = max({output[0], output[1], output[2]});
    vector<string> new_display;
    for (int i = 0; i < 3; ++i) if (output[i] == mx) new_display.emplace_back(cows[i]);
    if (display != new_display) {
      ans++;
      display = new_display;
    }
  }
  fout << ans << '\n';
}
