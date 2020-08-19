#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	long long int sum=0;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	sort(arr, arr+n, greater<int>());
	for(int i=0;i<n;i++){
		sum+=pow(2, i) * arr[i];
	}
	printf("%lld",sum);
	return 0;
}
