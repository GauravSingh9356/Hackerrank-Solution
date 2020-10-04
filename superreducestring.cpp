#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	int i=0;
	while(i<s.length()){
		if(s[i]==s[i+1]){
			s.erase(s.begin()+i, s.begin() + i+2);
			i=0;
			continue;
		}
		i++;
	}
	if(s.length()==0)
		cout<<"Empty String";
	else
		cout<<s;
	return 0;
}
