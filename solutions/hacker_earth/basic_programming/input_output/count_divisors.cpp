// HackerEarth Problem Link: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/count-divisors/

#include<bits/stdc++.h>
using namespace std;

int main(){
  int l,r,k,ct=0;
  cin>>l>>r>>k;
  for(int i=l;i<=r;++i)
    if(i%k==0)
      ct++;
  cout<<ct<<endl;
  return 0;
}
