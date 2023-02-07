// USACO Problem Link: http://usaco.org/index.php?page=viewproblem2&cpid=1275

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string b;
    cin>>n>>b;
    int max_g;
    int max_h;
    vector<int> v(n);
    for(int i=0;i<n;++i) {
        cin>>v[i];
        v[i]--;
        if(b[i]=='G')
            max_g=i;
        if(b[i]=='H')
            max_h=i;
    }
    int lead_g=-1,lead_h=-1;
    bool g=false,h=false;
    for(int i=0;i<n;++i) {
        if(b[i]=='G'&&!g) {
            g=true;
            if (v[i]>=max_g)
                lead_g=i;
        }
        if(b[i]=='H'&&!h) {
            h=true;
            if(v[i]>=max_h)
                lead_h=i;
        }
    }
    int p=0;
    for(int i=0;i<n;++i) {
        if(i!=lead_g&&i!=lead_h) {
            if(b[i]=='G'&&lead_h!=-1) {
                if(i<lead_h&&v[i]>=lead_h)
                    p++;
            }
            if(b[i]=='H'&&lead_g!=-1) {
                if (i<lead_g&&v[i]>=lead_g)
                    p++;
            }
        }
    }
    if (lead_g!=-1&&lead_h!=-1)
        p++;
    cout<<p<<endl;
    return 0;
}