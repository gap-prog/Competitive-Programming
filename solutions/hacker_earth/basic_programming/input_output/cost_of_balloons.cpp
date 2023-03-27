// HackerEarth Problem Link: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/

#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int g,p,n;
    cin>>g>>p>>n;
    int arr[n][2];
    for(int i=0;i<n;++i){
      int p1,p2;
      cin>>p1>>p2;
      arr[i][0]=p1;
      arr[i][1]=p2;
    }
    int gc1=0,pc1=0,gc2=0,pc2=0;
    for(int i=0;i<n;++i){
      if(arr[i][0]==1){
        gc1++;pc2++;
      }
      if(arr[i][1]==1){
        pc1++;gc2++;
      }
    }
    int s1=(gc1*g)+(pc1*p),s2=(gc2*g)+(pc2*p);
    cout<<((s1>s2)?s2:s1)<<endl;
  }
  return 0;
}
