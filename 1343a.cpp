#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i,n,sum=1;
    cin>>t;
    while(t--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            sum+=(1*pow(2,i));
            if(n%sum==0)
                break;
        }
        cout<<n/sum<<endl;
        sum=1;
    }
    return 0;
}
