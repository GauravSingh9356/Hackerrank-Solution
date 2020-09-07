#include<bits/stdc++.h>
using namespace std;
long long int arr[10000000] = {0};
int main(int argc, char const *argv[])
{
	long long int n, q,a,b,k,x=0,max=0;
	scanf("%lld%lld",&n,&q);
	
	while(q--){
		scanf("%lld%lld%lld",&a,&b,&k);
		arr[a]+=k;
		if(b+1<=n){
			arr[b+1]-=k;
		}
	}
	for(int i=1;i<=n;i++){
		x=x+arr[i];
		if(x>max){
			max=x;
		}
	}
	cout<<max;
	return 0;
}
