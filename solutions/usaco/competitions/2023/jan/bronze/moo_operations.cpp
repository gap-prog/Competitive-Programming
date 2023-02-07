// USACO Problem Link: http://usaco.org/index.php?page=viewproblem2&cpid=1277

#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	cin>>s;
	int sz=s.size();
	if((sz<3)||(find(s.begin()+1,s.end()-1,'O')==s.end()-1)){
		cout<<-1<<endl;
		return;
	}
	int ct=2;
	for(int i=0;i<=sz-3;++i){
		if(s.substr(i,3)=="MOO")
			ct=min(ct,0);
		else if((s.substr(i,3)=="OOO")||(s.substr(i,3)=="MOM"))
			ct=min(ct,1);
	}
	cout<<(ct+sz-3)<<endl;
	return;
}

int main() {
	int q;
	cin>>q;
	while(q--){
		solve();
	}
	return 0;
}