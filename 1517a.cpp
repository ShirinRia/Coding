#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,a,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2050!=0)
            cout<<-1<<endl;
        else{
            a=n/2050;

            while(a!=0){
            sum = sum + a % 10;
            a = a / 10;
            }
            cout<<sum<<endl;
            sum=0;
        }
    }
}
