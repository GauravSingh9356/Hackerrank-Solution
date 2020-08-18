#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	string h="hackerrank";
	string s;
	scanf("%d",&t);
	while(t--){
		cin>>s;
		int j=0;
		if(s.length()<h.length()){
			printf("NO\n");
			continue;
		}
		for(int i=0;i<s.length();i++){
			if(j<h.length() && s[i]==h[j])
				j++;
		}
		if(j==h.length()){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}
