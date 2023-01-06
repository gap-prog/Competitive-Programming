// CSES Problem Link: https://cses.fi/problemset/task/1072

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define spc " "
#define nl '\n'
#define sz(x) ((int) x.size())

void solve() {
        ll n;
        cin>>n;
        for(ll i=1;i<=n;++i)
                cout<<i*i*(i*i-1)/2-4*(i-1)*(i-2)<<nl;
}

int main() {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        solve();
        return 0;
}
