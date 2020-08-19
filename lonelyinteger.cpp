#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,a;
	int res=0;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&a);
		res^=a;
	}
	printf("%d",res);
	return 0;
}
