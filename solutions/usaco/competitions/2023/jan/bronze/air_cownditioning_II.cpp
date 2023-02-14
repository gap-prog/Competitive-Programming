// USACO Problem Link: http://usaco.org/index.php?page=viewproblem2&cpid=1276

#include <bits/stdc++.h>
using namespace std;

int ans=INT_MAX;
array<int, 100> arr;
vector<array<int, 4>> v(10);

void rec(string s,int num) {
    if (s.length()<num) {
        rec(s+"0",num);
        rec(s+"1",num);
        return;
    }
    int res=0;
    array<int,100> arr2{};
    for(int i=0;i<num;++i){
        if(s[i]=='1'){
            for(int j=v[i][0]-1;j<v[i][1];++j)
                arr2[j]+=v[i][2];
        }
    }
    for(int i=0;i<num;++i){
        if (s[i]=='1')
            res+=v[i][3];
    }
    for (int i=0;i<100;++i)
        if (arr[i]>arr2[i])
            return;
    ans=min(ans,res);
    return;
}

int main() {
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;++i){
        int s,t,c;
        cin>>s>>t>>c;
        for(int i=s-1;i<t;++i)
            arr[i]=c;
    }
    v.resize(m);
    for(int i=0;i<m;++i) {
        cin>>v[i][0]>>v[i][1]>>v[i][2]>>v[i][3];
    }
    rec("0", m);
    rec("1", m);
    cout<<ans<<endl;
    return 0;
}
