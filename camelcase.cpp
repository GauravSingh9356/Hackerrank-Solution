#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int count=1;
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]<97){
			count++;
		}
	}
	printf("%d", count);
	return 0;
}
