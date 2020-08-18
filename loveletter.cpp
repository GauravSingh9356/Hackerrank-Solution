#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		int temp=0;
		string s;
		cin>>s;
		int n=s.length()/2;
		int i=0,j=s.length()-1;
		while(i<n && j>=s.length()-n){
			if(s[i]!=s[j]){
				temp=temp+abs(s[j]-s[i]);
			}
			j--;
			i++;
		}
		printf("%d\n",temp);
	}
	return 0;
}
