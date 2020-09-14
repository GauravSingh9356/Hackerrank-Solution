#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t,a,b,count=0;
	scanf("%d",&t);
	while(t--){
		count=0;
		scanf("%d%d",&a,&b);
		count=floor(sqrt(b))-ceil(sqrt(a))+1;
		printf("%d\n",count);
	}
	return 0;
}

