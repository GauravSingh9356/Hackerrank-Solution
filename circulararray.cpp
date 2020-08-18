#include<bits/stdc++.h>
using namespace std;
void rot(int arr[], int k, int n){
	for(int i=0;i<k;i++){
		int temp=arr[n-1];
		for(int i=n-1;i>0;i--){
			arr[i]=arr[i-1];
		}
		arr[0]=temp;
	}
}
int main(int argc, char const *argv[])
{
	int n,k,q;
	scanf("%d%d%d",&n,&k,&q);
	int arr[n], que[q];
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	rot(arr, k, n);
	for(int i=0;i<q;i++){
		scanf("%d",&que[i]);
		printf("%d\n",arr[que[i]]);
	}
	return 0;
}
