#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,m,count;
	vector<int>ans;
	scanf("%d%d",&n,&m);
	int k;
	string s[n];
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	for(int i=0;i<n;i++){
		string temp1=s[i];
		for(int j=i+1;j<n;j++){
			count=0;
			k=0;
			string temp2=s[j];
			while(k<m){
			if(temp1[k]=='1' && temp2[k]=='1' || temp1[k]=='1' && temp2[k]=='0' || temp1[k]=='0' && temp2[k]=='1'){
				count++;
			}
			k++;
		}
		ans.push_back(count);
		}
	}
	int max_value=*max_element(ans.begin(), ans.end());
	int freq=0;
	for(int i=0;i<ans.size();i++){
		if(max_value==ans[i])
			freq++;
	}
	printf("%d\n%d",max_value, freq);
	return 0;
}
