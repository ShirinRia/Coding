#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
      /* string s,a,b;
       cin>>s;
       a=s;
    sort(s.begin(), s.end());
       cout<<s[0]<<" ";
     for(int i = 0; i<a.length();i++){
         cout<<a[i];
     }
    cout<<endl;*/
     char str[1000];
    scanf("%s",str);

    //Declaring maximum and minimu charactter
    char min = str[0];
    int i,j=0; 
    for(i=0;i<strlen(str);i++) {
		
        //Checking minimum character
        if(str[i] < min) {
            min = str[i];
            j=i;
        }
    }
     printf("%c ", min);
       for(i=0;i<strlen(str);i++) {
        if(i==j) {
           continue;
        }
         printf("%c",str[i]);
    }
    cout<<endl;
    j=0;
    }
    return 0;
    //lexicographically=dictionary onujayi coto boro
}