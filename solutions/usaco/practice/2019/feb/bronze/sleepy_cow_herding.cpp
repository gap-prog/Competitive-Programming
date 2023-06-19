// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=915

#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("herding.in");
    ofstream fout("herding.out");
    vector<int> cows(3); for (int &i: cows) fin >> i;
    sort(cows.begin(), cows.end());
    int mn;
    if (cows[0] + 1 == cows[1] && cows[1] + 1 == cows[2]) mn = 0;
    else if (cows[0] + 2 == cows[1] || cows[1] + 2 == cows[2]) mn = 1;
    else mn = 2;
    int mx = max(cows[1] - cows[0], cows[2] - cows[1]) - 1;
    fout << mn << '\n' << mx << '\n';
    return 0;
}