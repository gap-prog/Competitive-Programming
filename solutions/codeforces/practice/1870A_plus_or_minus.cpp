// CodeForces Problem Link: https://codeforces.com/contest/1807/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
  int a,b,c;cin>>a>>b>>c;
  if(a+b==c)cout<<"+\n";
  else cout<<"-\n";
  return;
}

int main(){
  int T;cin>>T;
  while(T--)
    solve();
  return 0;
}
