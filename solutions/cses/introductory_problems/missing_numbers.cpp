// CSES Problem Link: https://cses.fi/problemset/task/1071

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define spc " "
#define nl '\n'
#define sz(x) ((int) x.size())

void solve() {
        ll y,x;
        cin>>y>>x;
        if(y<x){
                if(x%2==1){
                        ll r=x*x;
                        cout<<r-y+1<<nl;
                }else{
                        ll r=(x-1)*(x-1)+1;
                        cout<<r+y-1<<nl;
                }
        }else{
                if(y%2==0){
                        ll r=y*y;
                        cout<<r-x+1<<nl;
                }else{
                        ll r=(y-1)*(y-1)+1;
                        cout<<r+x-1<<nl;
                }
        }
}

int main() {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        int t;
        cin >> t;
        while (t--) {
                solve();
        }
        return 0;
}
