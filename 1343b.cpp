#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,s=0,d=0,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%4!=0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
            s=d=0;
            i=1;
        for(i=1;i<=n;i++)
            {
                if(i%2==0)
                {
                    cout<<i<<" ";
                    s+=i;
                }
            }
            i=1;
           for(i=1;i<=n-2;i++)
            {
                if(i&1)
                {
                   cout<<i<<" ";
                    d+=i;
                }
            }
            cout<<s-d<<" ";
            cout<<endl;

    }
    return 0;
}
