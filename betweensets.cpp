#include<bits/stdc++.h>
using namespace std;
int hcf(int a, int b){
	if(b==0)
		return a;
	else
	 return hcf(b, a%b); 
}
int lcm(int a[], int n){
int ans=1;
for(int i=0;i<n;i++){
	ans=(ans*a[i])/hcf(ans, a[i]);
}
return ans;
}

int main(int argc, char const *argv[])
{
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n],b[m];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<m;i++)
		scanf("%d",&b[i]);
	int l=lcm(a, n);
	int g=b[0];
	for(int i=1;i<m;i++){
		g=hcf(g, b[i]);
	}
	int count=0;
	int mn=l,i=1;
	while(mn<=g){
		mn=l*i;
		if(g%mn==0)
			count++;
		i++;
	}
	printf("%d",count);
	
	return 0;
}
