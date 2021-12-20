#include<iostream>
using namespace std;
int t[1000];
int main()
{
    int n,i,l=0,r,s=0,d=0,j;
    cin>>n;
    for(j=0;j<n;j++){
        cin>>t[j];
    }
    r=n-1;
     for(i=1;i<=n;i++)
     {
         if(i%2!=0)
         {
             if(t[l]>t[r])
             {
                 s=s+t[l];
                 l++;
             }
             else if(t[r]>t[l])
             {
                 s=s+t[r];
                 r--;
             }
             else
             {
                 s=s+t[r];r--;
             }
         }
         else
         {
             if(t[l]>t[r])
             {
                 d=d+t[l];
                 l++;
             }
             else if(t[r]>t[l])
             {
                 d=d+t[r];
                 r--;
             }
             else
             {
                 d=d+t[r];r--;
             }
         }
     }
     cout<<s<<" "<<d<<endl;
     return 0;
}