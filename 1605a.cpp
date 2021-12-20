#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a1,a2,a3,d=0;
    cin>>t;
    while(t--){
        cin>>a1>>a2>>a3;
        d=abs(a1+a3-2*a2);
        if(d%3==0){
           cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
      

    }
    return 0;
}