#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int arr[26];
	for(int i=0;i<26;i++)
		scanf("%d",&arr[i]);
	string word;
	cin>>word;
	int max_=INT_MIN;
	int arr1[word.length()];
	for(int  i=0;i<word.length();i++){
		arr1[i]=arr[int(word[i])-int('a')];
		max_=max(arr1[i], max_);
	}
	cout<<max_*word.length();


	return 0;
}
