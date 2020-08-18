#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t,temp,key,pos1,pos2;
	scanf("%d",&t);
	while(t--){
		int m,n;
		key=0;
		scanf("%d%d",&m,&n);
		int arr[n];
		for(int i=0;i<n;i++)
			scanf("%d",&arr[i]);
		for(int i=0;i<n;i++){
			temp=arr[i];
			if(key==1)
				break;
			for(int j=i+1;j<n;j++){
				if(temp+arr[j]==m){
					pos1=i+1;
					pos2=j+1;
					key=1;
					break;
				}
			}
		}
		printf("%d %d\n",pos1,pos2);
	}
	return 0;
}
