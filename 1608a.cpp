#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int s=n;
        int array[n+1];
        for(int i=0;i<n;i++){
           
            array[i]=s;
            s++;
        }
        for(int i=0;i<n;i++){
           cout<<array[i]<<" ";
        }
        cout<<endl;
    }
}