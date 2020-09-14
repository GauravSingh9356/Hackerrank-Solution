#include<bits/stdc++.h>
using namespace std;
int count=0;
void findcount(int *arr, int i, int j,int m,int n, int val){
	if(i<0 || i>=n|| j<0 || j>=m){
		return;
	}
	if(arr[i][j]!=1)
		return;
	if(arr[i][j]==1){
		count++;
	}
	findcount(arr, i+1, j, m,n, val);
	findcount(arr, i-1, j, m,n, val);
	findcount(arr, i, j+1, m,n, val);
	findcount(arr, i, j-1, m,n, val);
}
int main(int argc, char const *argv[])
{
	int n,m,count=0;
	scanf("%d%d",&n,&m);
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			scanf("%d",&arr[i][j]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			findcount(arr, i,j,m,n,1);
	}
	cout<<count;
	
	return 0;
}
