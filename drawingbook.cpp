#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,p,count=0;
	scanf("%d%d",&n,&p);
	if(n%2==0){
		if(p>n/2){
			int temp=n;
			while(temp>p){
				temp-=2;
				count++;
			}
			printf("%d",count);
		}
		else{
			if(p==1)
				printf("0");
			else{
				int temp=1;
				while(temp<p){
					temp+=2;
					count++;
				}
				printf("%d",count);
			}
		}
	}
	else{
		if(p>n/2){
			if(p==n-1 || p==n){
				printf("0");
			}
			else{
				n--;
				int temp=n;
				while(temp>p){
					temp-=2;
					count++;
				}
				printf("%d",count);

			}
		}
		else{
			if(p==1)
				printf("0");
			else{
				int temp=1;
				while(temp<p){
					temp+=2;
					count++;
				}
				printf("%d",count);
			}
		}
	}
	return 0;
}
