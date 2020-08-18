#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int arr[n];
	map<int, int>mp;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		mp[arr[i]]++;
	}
	int ans=INT_MIN;
	map<int, int>::iterator mpp;
	for(mpp=mp.begin();mpp!=mp.end();mpp++){
		ans=max(ans, mpp->second);
	}
	for(mpp=mp.begin();mpp!=mp.end();mpp++){
		if(mpp->second==ans){
			printf("%d",mpp->first);
			break;
		}
	}
	return 0;
}