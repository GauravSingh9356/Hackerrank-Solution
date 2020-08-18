#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
	int rem;
	int x=max(a,b);
	int y=min(a,b);
	while(y)
	{
		rem=x%y;
		x=y;
		y=rem;
	}
	return x;
}
int main(int argc, char const *argv[])
{
	vector<int>arr={3,13,26};
	int k=arr[0];
	for(auto x:arr)
	{
		k=gcd(k, x);
	}
	cout<<k;


	return 0;
}
