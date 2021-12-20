#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char m[11],d[10] = {'0'}, c=0;
    cin>>n>>m;
    while (n != 0)
    {
        d[c++] = '0' + n % 10;
        n /= 10;
    }
    sort(d, d + c);
    if (d[0] == '0')
    {
        for (int i = 1; i < c; ++i)
        {
            if (d[i] != '0')
            {
                d[0] = d[i];
                d[i] = '0';
                break;
            }
        }
    }
    if(strcmp(m, d) == 0 )
        cout<<"OK"<<endl;
        else
            cout<<"WRONG_ANSWER"<<endl;
    return 0;
}
