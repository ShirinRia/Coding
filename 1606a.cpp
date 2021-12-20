#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,c=0,d=0;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'){
                if(s[i+1]=='b'){
                    c++;
                }

            }
             if(s[i]=='b'){
                if(s[i+1]=='a'){
                    d++;
                }

            }

        }
        if(c==d){
           cout<<s<<endl; 
           continue;
        }
        else if(c>d){
             for(int i=0;i<s.size();i++){
            if(s[i]=='a'){
              s.replace(i, 1,"b");
                i=s.size();
            }
            }
        }
         else if(d>c){
             for(int i=0;i<s.size();i++){
            if(s[i]=='b'){
              s.replace(i, 1,"a");
                i=s.size();
            }
            }
        }
        c=0;d=0;
        
        cout<<s<<endl;
    }
}