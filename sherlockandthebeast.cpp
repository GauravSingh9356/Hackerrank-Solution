#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t,n,temp;
    int val=0;
    string s;
    scanf("%d",&t);
    while(t--){
        val=0;
        s.clear();
        scanf("%d",&n);
        if(n%3==0){
            for(int i=0;i<n;i++){
                s.push_back('5');
            }
            cout<<s<<"\n";
        }
        else {
            for(int i=3;i<=n;i+=3){
                temp=n-i;
                if(temp%5==0){
                    val = max(val, i);
                }
            }
            if(val>0){
            for(int i=0;i<val;i++){
                s.push_back('5');
            }
            for(int i=0;i<n-val;i++){
                s.push_back('3');
            }
            cout<<s<<"\n";
            }
            else if(n%5==0){
                for(int i=0;i<n;i++){
                s.push_back('3');
            }
            cout<<s<<"\n";
            }
            else{
                cout<<-1<<"\n";
            }
            
        }
    }
    return 0;
}
