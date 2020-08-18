#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t,n,c,m;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d",&n,&c,&m);
		int eaten=n/c;
		int wrap=n/c;
		while(wrap>=m){
			eaten=eaten+wrap/m;
			wrap=wrap-(wrap/m)*m + wrap/m;
		}
		printf("%d\n",eaten);

	}
	return 0;
}
