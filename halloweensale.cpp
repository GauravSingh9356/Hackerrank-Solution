#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int p,d,m,s,count=0;
	scanf("%d%d%d%d",&p,&d,&m,&s);
	int key=1;
	int i=1;
	while(s>=m){
		if(key){
		s=s-p;
		key=0;
		count++;
	}
	else{
		if((p-i*d)<m){
			s=s-m;
			count++;
		}
		else{
		s=s-(p-i*d);
		i++;
		count++;
	}
	}
	}
	printf("%d",count);
	return 0;
}
