// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=526

#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("censor.in");
    ofstream fout("censor.out");
    string s, t; fin >> s >> t;
    string ans;
    for (int i = 0; i < s.size(); ++i) {
        ans += s[i];
        if (ans.size() >= t.size() && ans.substr(ans.size() - t.size()) == t) ans.resize(ans.size() - t.size());
    }
    fout << ans << '\n';
    return 0;
}
