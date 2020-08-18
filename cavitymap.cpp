#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%1d",&arr[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i>=1 && i<n-1 && j>=1 && j<n-1){
				if(arr[i][j]>arr[i-1][j] && arr[i][j]>arr[i+1][j] && arr[i][j]>arr[i][j-1] && arr[i][j]>arr[i][j+1]){
					printf("X");
				}
				else
					printf("%d",arr[i][j]);
			}
			else
				printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
