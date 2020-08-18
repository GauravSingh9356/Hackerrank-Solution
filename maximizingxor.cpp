#include<bits/stdc++.h>
using namespace std;
int cal(int l, int r){
	int xorvalue=l ^ r;
	int msbpos=0;
	while(xorvalue){
		msbpos++;
		xorvalue>>=1;
	}
	int maxxor=0;
	int two=1;
	while(msbpos--){
		maxxor+=two;
		two<<=1;
	}
	return maxxor;
}
int main(int argc, char const *argv[])
{
	int l,r;
	scanf("%d%d",&l,&r);
	printf("%d",cal(l,r));
	return 0;
}
