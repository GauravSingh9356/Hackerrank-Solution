#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t,n,k;
	scanf("%d",&t);
	vector<int>a1;
	vector<int>a2;
	while(t--){
		scanf("%d%d",&n,&k);
		int arr1[n],arr2[n];
		for(int i=0;i<n;i++){
			scanf("%d",&arr1[i]);
		}
		for(int i=0;i<n;i++){
			scanf("%d",&arr2[i]);
		}
		sort(arr1, arr1+n);
		sort(arr2, arr2+n, greater<int>());
		for(int i=0;i<n;i++){
			if(arr1[i]+arr2[i]<k){
				printf("NO\n");
				break;
			}
		}
		if(i==n){
			printf("YES\n");
		}
	}
	return 0;
}
