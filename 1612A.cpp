#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x1=0,y1=0,x2,y2,x3,y3,i,j,p3;  
    double p1,p2;
    cin>>t;
    while(t--){
        cin>>x2>>y2;
        p1=(abs(x1-x2)+abs(y1-y2))%2;
        
        if(p1!=0)
        {
            cout<<-1<<" "<<-1<<endl;
        }
        else{
       p1=(abs(x1-x2)+abs(y1-y2))/2;
        for(i=x1;i<=x2;i++){
            for(j=y1;j<=y2;j++){
                p2=(abs(x1-i)+abs(y1-j));
               if(p1==p2){
                
                 cout<<i<<" "<<j<<endl;
                  i=x2+1;
                 j=y2+1;
               }
            }
        }
       
    } 
    }
    return 0;
}