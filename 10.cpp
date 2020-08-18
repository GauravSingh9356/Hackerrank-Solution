#include<bits/stdc++.h>
using namespace std;
int main()
{
    string zoo;
    int j=0;
    int c;
    int arr1[2];
    cin>>zoo;
    for(int i=0;i<zoo.size();i=i+c)
    {
        arr1[j]=count(zoo.begin(),zoo.end(),zoo[i]);
         c=arr1[j];
        j++;
        
    }
    if(2*arr1[0]==arr1[1])
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    
    
}