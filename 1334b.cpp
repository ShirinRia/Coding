#include <bits/stdc++.h>
using namespace std;
double arr[100005];
int main() {
    int t,p,n,x,i,c;
    double sum,avg;
    cin>>t;
    for (p=1; p<=t; p++) {
        cin>>n>>x;
        for (i=0; i<n; i++)
            cin>>arr[i];
        sort (arr,arr+n);
        sum = avg = 0.0;
        c = 0;
        for (i=n-1; i>=0; i--) {
            sum += arr[i];
            avg = sum/(double(n-i));
            if (avg >= x) c++;
            else break;
        }
       cout<<c<<endl;
    }
    return 0;
}
