#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int d1,m1,y1,d2,m2,y2;
	int fine=0;
	scanf("%d%d%d%d%d%d",&d1,&m1,&y1,&d2,&m2,&y2);
	if(y1>y2)
		fine=10000;
	else if(y1==y2 && m1>m2){
		fine=500*(m1-m2);
	}
	else if(d1>d2 && y1==y2 && m1==m2){
		fine=15*(d1-d2);
	}
	printf("%d",fine);
	return 0;
}
