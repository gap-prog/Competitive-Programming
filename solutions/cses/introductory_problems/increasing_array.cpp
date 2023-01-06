// CSES Problem Link: https://cses.fi/problemset/task/1094

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define spc " "
#define nl '\n'
#define sz(x) ((int) x.size())

void solve() {
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(auto&i:v)
                cin>>i;
        ll ct=0,m=v[0];
        for(ll i=1;i<n;++i){
                ct+=max(0LL,m-v[i]);
                m=max(m,v[i]);
        }
        cout<<ct<<endl;
}

int main() {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        solve();
        return 0;
}
