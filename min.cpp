#include<bits/stdc++.h>
 using namespace std;
int main(int argc, char const *argv[])
{
    int e=100;
    int n,k;
    cin>>n;
    cin>>k;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int i=0;
    int t=1;
    while(t)
    {
        i=(i+k) % n;
        e--;
         if(i==0 || i>n-1)
            {
                break;
            }
        if(arr[i]==1)
        {
           
            e+=-2;
        }
    
    }
    cout<<e;
     return 0;
}
