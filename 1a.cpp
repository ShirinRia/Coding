#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,b,k,l,c;
    cin>>n>>m>>a;
    if(n%a!=0 && m%a!=0){
        b=(n/a)+1;
        k=(m/a)+1;
        c=k*b;
    }
    
    else if(n%a==0 && m%a==0){
        b=(n/a);
        k=(m/a);c=k*b;
    }
    else if(n%a!=0 && m%a==0){
        b=(n/a)+1;
        k=(m/a);c=k*b;
    }
    else if(n%a==0 && m%a!=0){
        b=(n/a);
        k=(m/a)+1;
        c=k*b;
    }
   
    cout<<c<<endl;
    return 0;
}