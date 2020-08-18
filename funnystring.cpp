#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t,i;
	scanf("%d",&t);
	vector<int>ans1,ans2;
	while(t--){
		string s;
		cin>>s;
		for(int i=0;i<s.length()-1;i++){
			ans1.push_back(abs(s[i+1]-s[i]));
		}
		reverse(s.begin(), s.end());
		for(int i=0;i<s.length()-1;i++)
			ans2.push_back(abs(s[i+1]-s[i]));
		if(ans1==ans2)
			printf("Funny\n");
		else
			printf("Not Funny\n");
		ans1.clear();
		ans2.clear();
	}
	return 0;
}
