#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,count=0,con=0;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	sort(arr, arr+n);
	for(int i=0;i<n;i+=count){
		count=0;
		int temp=arr[i];
		temp+=4;
		for(int j=i;arr[j]<=temp;j++){
			count++;
		}
		con++;
	}
	printf("%d",con);
	return 0;
}
