#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k=0,count=0;
	scanf("%d", &n);
	string s;
	cin>>s;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='U')
		{
			k++;
			if(k==0)
			count++;
		}
		
		else if (s[i]=='D'){
			k--;
		}
	}
	printf("%d", count);
	return 0;
}