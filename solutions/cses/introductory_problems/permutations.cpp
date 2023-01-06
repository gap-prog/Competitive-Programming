// CSES Problem Link: https://cses.fi/problemset/task/1070

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define spc " "
#define nl '\n'
#define sz(x) ((int) x.size())

void solve() {
        int n;
        cin>>n;
        if(n==1)
                cout<<1<<endl;
        else if(n<4)
                cout<<"NO SOLUTION"<<nl;
        else if(n==4)
                cout<<"2 4 1 3"<<nl;
        else{
                for(int i=1;i<=n;i+=2)
                        cout<<i<<spc;
                for(int i=2;i<=n;i+=2){
                        cout<<i;
                        if(i+2<=n)
                                cout<<spc;
                        else
                                cout<<nl;
                }
        }
}

int main() {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        solve();
        return 0;
}
