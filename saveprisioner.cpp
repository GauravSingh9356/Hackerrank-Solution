#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m,start,i=0;
		scanf("%d%d%d",&n,&m,&start);
		int actual=m%n;
		int final=actual + start-1;
		if(final>n){
			final=final%n;
			printf("%d\n", final);
		}
		else if(final==0)
			printf("%d\n",n);
		else
		printf("%d\n",final);
	}
	return 0;
}
