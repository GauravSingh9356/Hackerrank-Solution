#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,on,pt,i=1;
	multimap<int, int>mp;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d",&on,&pt);
		mp.insert({on+pt, i});
		i++;
	}
	for(multimap<int,int >::iterator me=mp.begin();me!=mp.end();me++ )
    {
    	cout<<me->second<<" ";
     }        
	return 0;
}
