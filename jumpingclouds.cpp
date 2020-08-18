#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	int m=0;
	int i=0;
	while(i<n-1){
		if(arr[i+2]==0){
			m++;
			i+=2;
		}
		else{
			m++;
			i+=1;
		}
	}
	if(i==n-2)
		printf("%d",m+1);
	else
		printf("%d",m);
	return 0;
}
