#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,number,c=0;
    cin>>number;
    number=(8*number)+1;
    for(i = 0; i <= number; i++)
    {
        if(number == i*i)
        {
            c++;
        }
    }
    if(c>0)
       {
                cout<<"YES"<<endl;
                c=0;
            }
            else
            {
                cout<<"NO"<<endl;
                c=0;
            }
    return 0;
}
