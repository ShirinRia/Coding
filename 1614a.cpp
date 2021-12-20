#include<bits/stdc++.h>
using namespace std;
int main() {
    int m,t,n,l,r,k,i,j=0,c=0;
    cin>>t;
    while(t--) {
       cin>>n>>l>>r>>k; 
       m=n+1;
       int price[m]; 
       for(i=0;i<n;i++){
           cin>>price[i];
       }
        sort(price, price + n);
         
       for(i=0;i<n;i++){
             if(price[i]>= l && price[i]<=r){
         
              j=j+price[i];
              if(j<=k)
              c++;
              else
                j=j-price[i];

    
       }
         }
     cout<<c<<endl;
    j=0;
    c=0;
    }

    return 0;}