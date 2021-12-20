#include<bits/stdc++.h>
 
using namespace std;
int main(){
    vector<string>a; 
    int n,t,j=0;
    string bi,c;
    cin>>t;
    while(t--){
      cin>>n; 
      
          int m=n-2;
        while(m--){
              cin>>bi;
           a.push_back(bi);  
             if(m<(n-2)){
            c=bi[1]; 
             if( a[j][1] == bi[0]) {
              a.push_back(c);
             
             }
             }
             else
             {
                a.push_back(bi);  
             }
             j++;
             }
              for (int i = 0; i != 5; ++i) 
        cout << a[i] ; 
        cout<<endl;
        a.clear();
      j=0;

    }
  return 0;
}