// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=964

#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("whereami.in");
    ofstream fout("whereami.out");
    int n; fin >> n;
    string s; fin >> s;
    int len = 1;
    while (len <= n) {
        set<string> st;
        bool flag = true;
        for (int i = 0; i <= n - len; ++i) {
            string sub = s.substr(i, len);
            if (st.count(sub) > 0) {
                flag = false;
                break;
            }
            st.insert(sub);
        }
        if (flag) {
            fout << len << '\n';
            break;
        }
        len++;
    }
    return 0;
}