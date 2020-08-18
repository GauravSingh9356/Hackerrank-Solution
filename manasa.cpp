#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	int n,a,b,value;
	vector<int>ans;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		scanf("%d%d",&a,&b);
		if(a==b){
			printf("%d\n", a*(n-1));
			continue;
		}
		if(a>b){
			int temp=a;
			a=b;
			b=temp;
		}
		for(int i=0;i<n;i++){
			 cout<<(a*((n-1)-i) + b*i)<<" ";
		}
	printf("\n");
}
	
	return 0;
}

