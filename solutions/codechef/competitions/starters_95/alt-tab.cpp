#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n; cin >> n;
    vector<string> v(n); for (string &i: v) cin >> i;
    reverse(begin(v), end(v));
    set<string> st;
    for (int i = 0; i < n; ++i) {
        int s1 = st.size();
        st.insert(v[i]);
        int s2 = st.size();
        if (s1 != s2) cout << v[i].substr(v[i].size() - 2, 2);
    }
    cout << '\n';
    return 0;
}
