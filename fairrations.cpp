#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	int count=0,sum=0;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	if(sum%2==0){
	for(int i=0;i<n;i++){
		if(arr[i]%2!=0){
			arr[i]=arr[i] + 1;
			arr[i+1]=arr[i+1] + 1;
			count+=2;
		}
	}
	printf("%d",count);
	else
		printf("NO");
	
	return 0;
}
