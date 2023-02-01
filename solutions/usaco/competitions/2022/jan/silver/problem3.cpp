#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;++i){
		cin>>v[i];
	}
	int pos=0,rsize=0;
	for(int i=0;i<n;++i){
		rsize+=v[i];
	}
	string s;
	while(s.size()<rsize){
		if(pos==0){
			s+="R";
            v[0]--;
            pos++;
		}
		else if(pos == n){
			s+="L";
            v[n-1]--;
            pos--;
		}
		else{
			if(*(prev(s.end()))=='L') {
				if(v[pos-1]>v[pos]){
					s+="L";
                    v[pos-1]--;
                    pos--;
				}
				else{
					s+="R";
                    v[pos]--;
                    pos++;
				}
			}
			else{
				if(v[pos]>v[pos-1]){
					s+="R";
                    v[pos]--;
                    pos++;
				}
				else{
					s+="L";
					v[pos-1]--;
                    pos--;
				}
			}
		}
	}
	cout<<s<<endl;
}
