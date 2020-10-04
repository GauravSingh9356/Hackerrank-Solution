#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,m,value;
	vector<int>ans;
	scanf("%d%d",&n,&m);
	int arr[m];
	for(int i=0;i<m;i++)
		scanf("%d",&arr[i]);
	sort(arr, arr+m);
	for(int i=0;i<n;i++){
		value=INT_MAX;
		for(int j=0;j<m;j++){
			value = min(value,abs(i-arr[j]));
			if(value==0){
				ans.push_back(0);
				break;
			}
		}
		ans.push_back(value);
	}
	cout<<*max_element(ans.begin(), ans.end());

	return 0;
}
