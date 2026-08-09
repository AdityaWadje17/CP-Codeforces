#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void sol(){
    int a,b,c;
    cin>>a>>b>>c;
    while( a>(b+c) || b>(a+c) || c>(a+b)) {
        if(a > (b+c))
            a= b+c;
        else if (b > (a+c))
            b= a+c;
        else
            c = a+b;
    }
    int mini = min(min(a,b), c);
    int maxi = max(max(a,b),c);
    cout<<maxi-mini<<endl;
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
        sol();
        return 0;
}