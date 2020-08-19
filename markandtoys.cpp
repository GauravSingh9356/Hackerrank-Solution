#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,m,sum=0,count=0;
	scanf("%d%d",&n,&m);
	int arr[n];
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	sort(arr, arr+n);
	int i=0;
	while(sum<m){
		sum+=arr[i];
		count++;
		i++;
	}
	printf("%d\n", count-1);
	return 0;
}
