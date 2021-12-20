#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t;
    string s;
    cin>>t;
    while(t--)
    {
        cin >> s;
        n = s.length();
        if(n >= 2 && s[n - 2] == 'p' && s[n - 1] == 'o')
            cout<<"FILIPINO"<<endl;
        else if(n >= 4 && s[n - 4] == 'd' && s[n - 3] == 'e' && s[n - 2] == 's' && s[n - 1] == 'u')
            cout<<"JAPANESE"<<endl;
        else if(n >= 4 && s[n - 4] == 'm' && s[n - 3] == 'a' && s[n - 2] == 's' && s[n - 1] == 'u')
            cout<<"JAPANESE"<<endl;
        else
            cout<<"KOREAN"<<endl;
        cout<<endl;
    }
    return 0;
}
