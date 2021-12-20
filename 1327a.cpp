#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,n,k,i,s=1;
    string ans;
    cin>>x;
    for(i=0;i<x;i++)
    {
        cin>>n>>k;
        s=k*k;
        if(s>n)
            ans="NO";
            else if(s==n)
                ans="YES";
            else
            {
                if (k%2!=0)
                ans = (n & 1) ? "YES" : "NO";
            else
                ans = (n & 1) ? "NO" : "YES";
            }
        cout<<ans<<endl;
    }
    return 0;
}
