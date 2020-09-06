#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	int minv=INT_MAX;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	sort(arr, arr+n);
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			minv=min(minv, abs(arr[i]-arr[j]));
		}
	}
	printf("%d\n", minv);
	return 0;
}
