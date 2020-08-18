#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,val;
	scanf("%d",&n);
	map<int, int>mp;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&val);
		mp[val]++;
	}
	int min_=INT_MAX;
	map<int, int>::iterator mpp;
	for(mpp=mp.begin();mpp!=mp.end();mpp++){
		if(mpp->second > 1){
			min_=min(min_, n-mpp->second);
		}
	}
	if(min_==INT_MAX){
		printf("%d",n-1);
	}
	else
	printf("%d",min_);
	return 0;
}

