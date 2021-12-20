#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t,n,m;
    cin >> t;
    while(t--) {
       cin>>n>>m;
       if(n==1 && m==1) {
           cout<<0<<endl;
            continue;
       }
       if(n==1 || m==1) {
           cout<<1<<endl;
           continue;
       }
       if(n>1 && m>1) {
           cout<<2<<endl;
           continue;
       }


    }
    return 0;
}