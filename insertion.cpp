#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    int rem;
    int x=max(a,b);
    int y=min(a,b);
    while(y)
    {
        rem=x%y;
         x=y;
        y=rem;
    }
return x;}
long long int lcm(int a, int b)
{return ((a*b)/gcd(a, b));}
int main()
{
    int a,b;
    cin>>a>>b;
    vector<int>arr1(a),arr2(b);
    for(auto &x:arr1)
        cin>>x;
    for(auto &x:arr2)
        cin>>x;
       long long int k1=arr1[0];
        int k2=arr2[0];
for(auto x:arr1)
        {
            k1=lcm(k1, x);
            cout<<k1<<" ";
        }
 for(auto x:arr2)
        {
            k2=gcd(k2, x);
        }
        int c=0;
        while(k1<=k2)
        {
            c++;
            k1+=gcd(k1, k2);
        }
    cout<<c;
}
