#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	long long int count=0,final_count;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]=='a')
			count++;
	}
	long long int n;
	scanf("%lld",&n);
	final_count=(n/s.length()) * count;
	long long int rem=n % s.length();
	for(int i=0;i<rem;i++){
		if(s[i]=='a')
			final_count++;
	}
	printf("%lld",final_count);
	return 0;
}
