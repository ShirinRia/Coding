#include<bits/stdc++.h>
using namespace std;
// Driver code
int main()
{
 int t,a,n,b,c;
 cin>>t;
 while(t--) {
     cin>>a;
    for(int i=0;i<a;i++){
        if(a%i==0){
            n=a/i;
            b=i;
            i=a;
            c=a-b-i;
        }
    }
 cout<<c<<" "<<b<<" "<<n<<endl;
   
    }
     return 0;
}