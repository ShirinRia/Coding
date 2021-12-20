#include<bits/stdc++.h>
 
using namespace std;
int main(){
    int t;
    long long a=0,b=0,c=0,mx=0,d=0,e,f,g;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        mx=max(b,c)+1-a;
        e=max(d,mx);
        mx=0;
        mx=max(a,c)+1-b;
        f=max(d,mx);
        mx=0;
        mx=max(b,a)+1-c;
       g=max(d,mx);
        mx=0;
        cout<<e<<" "<<f<<" "<<g<<endl;
    }
    return 0;
}