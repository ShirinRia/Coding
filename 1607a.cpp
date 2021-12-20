#include<bits/stdc++.h>
using namespace std;
  int pos[26];
int main(){
    int i,t,l,su=0;
    cin>>t;
    while(t--){
        string a,s;
        cin>>a>>s;
       
            for(int j=0;j<26;j++){
               int c = a[j] - 'a';
		        pos[c] = j + 1;
        }
        
        int currPos = pos[s[0] - 'a'];
         for(int j=0;j<s.length();j++){
         su+= abs(pos[s[j] - 'a'] - currPos);
		    currPos = pos[s[j] - 'a'];
        }
        cout<<su<<endl;
        su=0;
    }
    return 0;
}