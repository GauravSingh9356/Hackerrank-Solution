#include<bits/stdc++.h>
using namespace std;
int findit(string s){
	int count=0;
	for(int i=0;i<s.length()-1;i++){
		if(s[i]==s[i+1]){
			count++;
		}
	}
	return count;
}
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	string s[n];
	for(int i=0;i<n;i++){
		cin>>s[i];
		cout<<findit(s[i])<<"\n";
	}
	return 0;
}
