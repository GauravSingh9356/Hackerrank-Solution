#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int arr[n+1];
	for(int i=1;i<=n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=1;i<=n;i++){
		int temp=i,pos=1;
		for(int i=1;i<=n;i++){
			if(temp==arr[i])
				pos=i;
		}
		for(int i=1;i<=n;i++){
			if(pos==arr[i])
				printf("%d\n",i);
		}
	}
	return 0;
}
