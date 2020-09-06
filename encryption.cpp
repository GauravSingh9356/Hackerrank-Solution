#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int k;
	string s;
	cin>>s;
	double m,n;
	m=sqrt(s.length());
	n=sqrt(s.length());
	m=floor(m);
	n=ceil(n);
	m=n*m>=s.length()?m:m++;
		for(int i=0;i<n;i++)
		{
				k=i;
				for(int j=0;j<m;j++)
				{
					if(k>s.length()-1)
						break;
					cout<<s[k];
					k+=n;
				}
				cout<<" ";
		}
	return 0;
}
