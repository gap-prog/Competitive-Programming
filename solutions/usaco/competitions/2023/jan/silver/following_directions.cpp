// USACO Problem Link: http://usaco.org/index.php?page=viewproblem2&cpid=1279

#include <bits/stdc++.h>
using namespace std;

int n;
int arr[1502][1502], arr2[1502][1502];

int ft(){
	int res = 0;
	queue<pair<int, int>> q;
	for(int i=1;i<=n;++i){
		if(arr[i][n]==0){
			arr2[i][n]=arr[i][n+1];
			res+=arr2[i][n];
			q.push({i,n});
		}
		if(arr[n][i]==1){
			arr2[n][i]=arr[n+1][i];
			res+=arr2[n][i];
			q.push({ n, i });
		}
	}
	while(!q.empty()){
		int row=q.front().first,col=q.front().second;
		if(row-1>=1&&arr[row-1][col]==1){
			arr2[row-1][col]=arr2[row][col];
			res+=arr2[row-1][col];
			q.push({row-1,col});
		}
		if(col - 1 >= 1 && arr[row][col - 1] == 0){
			arr2[row][col-1]=arr2[row][col];
			res+=arr2[row][col-1];
			q.push({row,col-1});
		}
		q.pop();
	}
	return res;
}
int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	for(int i=1;i<=n;++i){
		for (int j=1;j<=n;++j){
			char c;
			cin>>c;
			arr[i][j]=(c=='R')?0:1;
		}
		cin>>arr[i][n+1];
	}
	for (int i=1;i<= n;++i)
		cin>>arr[n+1][i];
	int p=ft();
	cout<<p<<endl;
	int ct;
	cin>>ct;
	for(int i=0;i<ct;++i){
		int r,c;
		cin>>r>>c;
		int ov=arr2[r][c];
		arr[r][c]=(arr[r][c]==0)?1:0;
		if (arr[r][c]==0){
			if (c+1==n+1)
				arr2[r][c]=arr[r][c+1];
			else
                arr2[r][c]=arr2[r][c+1];
		}
		else{
			if (r+1==n+1)
				arr2[r][c]=arr[r+1][c];
			else
                arr2[r][c]=arr2[r+1][c];
		}
		queue<pair<int, int>> q;
		q.push({r,c});
		int ch=1,nv=arr2[r][c];
		while(!q.empty()){
			int row=q.front().first,col=q.front().second;
			if(row-1>=1&&arr[row-1][col]==1){
				ch++;
				arr2[row-1][col]=nv;
				q.push({row-1,col});
			}
			if (col-1>=1&&arr[row][col-1]==0){
				ch++;
				arr2[row][col-1]=nv;
				q.push({row,col-1});
			}
			q.pop();
		}
		p=p-(ch*ov)+(ch*nv);
		cout<<p<<endl;
	}
}
