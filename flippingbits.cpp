#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	long long int n;
	while(t--){
		scanf("%lld",&n);
		printf("%lld",~n);
	}
	return 0;
}
