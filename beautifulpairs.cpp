#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a[1003]={0};
    int b[1003]={0};
    int n,x;
    cin>>n;
    int a1[n],b1[n];
    for(int i=0;i<n;i++){
        cin>>x;
        a[x]++;
    }
    for(int i=0;i<n;i++){
        cin>>x;
        b[x]++;
    }
    int c=0;
    for(int i=0;i<1002;i++){
        if(a[i]>0&&b[i]>0){
            c+=(min(a[i],b[i]));
        }
    }
    if(c<n){
        cout<<c+1<<endl;
    }
    else {
        cout<<c-1<<endl;
    }
    return 0;
}