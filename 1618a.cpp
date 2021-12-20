#include<bits/stdc++.h>
 
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a[10],b[10];
       int n=7;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        b[0]=a[0];
        b[1]=a[1];
        b[2]=a[6]-a[0]-a[1];

      for(int i=0;i<3;i++){
           cout<<b[i]<<" ";
        }
        cout<<endl;
    }
  return 0;
}