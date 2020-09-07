#include<bits/stdc++.h>
using namespace std;
class Stackm
{
    stack<int>mainS;
    stack<int>trackS;

public:
    void push(int x){
        mainS.push(x);
        if(mainS.size() == 1){
            trackS.push(x);
            return;
        }
         if(x>trackS.top()){
            trackS.push(x);
        }
         else
            trackS.push(trackS.top()); 

    }
    int getMax(){
        return trackS.top();
    }
    int pop() 
    { 
        mainS.pop(); 
        trackS.pop(); 
    } 
};

int main(int argc, char const *argv[])
{
    int n,a,b;
    Stackm s;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&a);
        if(a==1){
            scanf("%d",&b);
            s.push(b);
        }
        else if(a==2){
            s.pop();
        }
        else{
            cout<<s.getMax()<<"\n";
        }
    }
    return 0;
}
