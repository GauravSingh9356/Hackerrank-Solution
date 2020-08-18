#include<bits/stdc++.h>
using namespace std;
int find(int n);
int find(int n)
{
    vector<int>arr;
    int j=0;
    int c=n;
    int count=0;
    while(c>0)
    {
        int k=c%10;
        arr.push_back(k);
        c=c/10;
        j++;
    }
    for(int i=0; i<arr.size(); i++)
    {
        if(n % arr[i]==0)
        {
            count++;
        }
        else
        {
            continue;
        }
    }
    return count;

}

int main()
{
    int t,n;
    cin>>t;
    int arr[t];
    for(int i=0; i<t; i++)
    {
        cin>>n;
        arr[i]=find(n);
    }
    for(int i=0;i<t;i++)
    {
        cout<<arr[i]<<"\n";
    }
    return 0;
}