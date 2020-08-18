#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	map<char, int>mp;
	int count=0;
	map<char, int>:: iterator itr;
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
		mp[s[i]]++;
	}
	for(itr=mp.begin();itr!=mp.end();itr++){
		if(itr->second %2==1){
			count++;
		}
	}
	if(count<=1){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}

	return 0;
}
