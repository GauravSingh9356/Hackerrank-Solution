#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s1;
	string s2;
	cin>>s1>>s2;
	int arr1[26]={0};
	int arr2[26]={0};
	int count=0;
	for(int i=0;i<s1.length();i++)
	{
		arr1[s1[i]-'a']++;
	}
	for(int i=0;i<s2.length();i++){
		arr2[s2[i]-'a']++;
	}
	for(int i=0;i<26;i++){
		count=count+abs(arr1[i]-arr2[i]);
	}
	cout<<count;

	return 0;
}
