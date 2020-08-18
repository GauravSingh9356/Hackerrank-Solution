#include <bits/stdc++.h>
#include <algorithm>
#include<iostream>
using namespace std;





int main()
{
   int sum1=0;
   int sum2=0;
    int arr[5];

    for (int i = 0; i < 5; i++) {
        

        cin>>arr[i];
    }

   sort(arr, arr+5);
   for(int i=0;i<4;i++)
   {
       sum1=sum1+arr[i];
   }
   for(int i=1;i<5;i++)
   {
       sum2=sum2+arr[i];
   }
   cout<<sum1<<" "<<sum2;
}

