#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,count=0;
	scanf("%d",&n);
	string s;
	cin>>s;
	for(int i=0;i<s.length();){
		if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0'){
			count++;
			i=i+3;
		}
		else{
			i++;
		}
	}
	printf("%d\n", count);
	return 0;
}
