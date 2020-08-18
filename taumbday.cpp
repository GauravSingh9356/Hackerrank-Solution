#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	long long int b,w,bc,wc,z,cost;
	scanf("%d",&t);
	while(t--){
		scanf("%lld%lld%lld%lld%lld",&b,&w,&bc,&wc,&z);
		if(bc>wc+z){
			cost=(b+w)*wc;
			cost=cost+b*z;
		}
		else if(wc>bc+z){
			cost=bc*(b+w);
			cost=cost+w*z;
		}
		else{
			cost=bc*b + wc*w;
		}
		printf("%lld\n",cost);

	}
	return 0;
}
