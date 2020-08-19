#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k,f,s,sum=0,sum_temp=0;
	scanf("%d%d",&n,&k);
	vector<int>arr;
	vector<int>arr1;
	for(int i=0;i<n;i++){
		scanf("%d%d",&f,&s);
		sum+=f;
		if(s==1){
			arr.push_back(s);
			arr1.push_back(f);
		}
	}
	if(!arr1.empty() && k<arr.size()){

	sort(arr1.begin(), arr1.end());
	for(int i=0;i<arr.size()-k;i++){
		sum_temp+=2*arr1[i];
	}
					}
	printf("%d",sum-sum_temp);
	return 0;
}
