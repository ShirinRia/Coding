#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,i,o[3000],t,j,odd=0,even=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>x;
         odd=0;even=0;
        for(j=0;j<x;j++)
        {
            cin>>o[j];
            if(o[j]&1)
                odd++;
            else
                even++;
        }
        if((odd&1)||(odd>0&&even>0))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
