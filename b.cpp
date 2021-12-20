#include<bits/stdc++.h>
using namespace std;
// Driver code
int main()
{
 long long t,a,n=0,b=0,c=0,d=0,i,gcd1=0,gcd2=0,gcd3=0;
 cin>>t;
 while(t--) {
     cin>>a;
    for( i=1;i<=a;i++){
        d=a%i;
        n=a/i;
        b=i;
        c=a-b-n;
      if(d==0){
           gcd1 = __gcd(c,b);
           gcd2 = __gcd(c,n);
           gcd3 = __gcd(b,n);
           if(gcd1==n)
        {cout<<c<<" "<<b<<" "<<n<<endl;
        break;}
           else if(gcd2==b){
           cout<<c<<" "<<b<<" "<<n<<endl;
           break;}
           else if(gcd3==c){
           cout<<c<<" "<<b<<" "<<n<<endl;
           break;}
      }
    }
   gcd1=0;gcd2=0;gcd3=0;b=0;c=0;d=0,n=0;
    }
     return 0;
}