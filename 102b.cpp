#include<bits/stdc++.h>
using namespace std;
char s[100000];
int main(){
int cnt=0;
cin>>s;
while(s[1]){
cnt++;
int res =0;
for(int i=0;s[i];i++)
    res+= s[i] - '0';
    sprintf(s,"%d",res);
}
cout<<cnt;
return 0;
}
