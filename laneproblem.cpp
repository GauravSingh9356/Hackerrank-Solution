#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,t,a,b,min_=INT_MAX;
	scanf("%d%d",&n,&t);
	int arr[n];
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<t;i++){
		scanf("%d%d",&a,&b);
		min_=INT_MAX;
		for(int i=a;i<=b;i++){
			min_=min(min_, arr[i]);
		}
		printf("%d\n",min_);
		}
	return 0;
}
