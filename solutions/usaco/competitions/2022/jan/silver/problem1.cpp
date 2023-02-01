#include <bits/stdc++.h>
using namespace std;

void solve(){
    string in,out;
    cin>>in>>out;
    map<char,char> m;
    for(int i=0;i<in.size();++i)
        m[in[i]]=out[i];
    for(int i=0;i<in.size();++i){
        if (m[in[i]]!=out[i]){
            cout<<-1<<endl;
            return;
        }
    }
    set<char> s;
    for(const pair<char,char> i:m){
        if (i.first==i.second)
            s.insert(i.first);
    }
    for(const char &i:s)
        m.erase(i);
    int req=m.size();
    int c=0;
    map<char,char> v;
	set<char> inc;
    for(const pair<char,char> &i:m){
        if (v[i.first]==false){
            pair<char,char> ck=i;
            v[i.first]=true;
            while(m.count(ck.second)){
                ck={ck.second,m[ck.second]};
                if (v[ck.first]){
                    if(inc.count(ck.first)==false){
                        pair<char,char> tk={ck.second, m[ck.second]};
                        set<char> cc;
                        cc.insert(ck.first);
                        cc.insert(tk.first);
                        bool cy=true;
                        while(tk!=ck) {
                            if(m.count(tk.second)== 0){
                                cy=false;
                                break;
                            }
                            tk={tk.second,m[tk.second]};
                            cc.insert(tk.first);
                        }
                        if (cy) {
                            c++;
                            for(const char &j:cc){
                                inc.insert(j);
                            }
                        }
                    }
                    break;
                }
                v[ck.first]=true;
            }
        }
    }
    cout<<req+c<<endl;
    return;
}

int main(){
	int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}