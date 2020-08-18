#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k,pages;
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(arr[i]>k){
		pages=arr[i]/k+1;
		for(int i=1;i<=pages;i++){
			
		}
	}
	else if(arr[i]%k==0){
		pages=arr[i]/k;
	}
	else{
		pages++;
	}
	}
	int j=0,lucky_no=0;
	for(int i=1;i<=pages;i++){
		if(arr[j]<=3){
		if(i<arr[j]){
			lucky_no++;
		}
	}
	else{
		int s1=arr[j]/k;

	}
	}

	return 0;
}
