#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if((a+b>c && b+c>a && c+a>b) || (a+b>d && b+d>a && d+a>b)|| (a+c>d && c+d>a && d+a>c)||(b+c>d && c+d>b && d+b>c)){
        cout<<"TRIANGLE"<<endl;
    }
    else if(((a+b==c )||(b+c==a)||(c+a==b))||((a+b==d)||(b+d==a)||(d+a==b))||((a+c==d)||(c+d==a)||(d+a==c))||((b+c==d)||(c+d==b)||(d+b==c)))
    cout<<"SEGMENT"<<endl;
    else
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}