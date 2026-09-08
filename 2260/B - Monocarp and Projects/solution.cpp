#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void sol(){
    int x,y,k;
    cin>>x>>y>>k;
    int num = 0;
    int i=0;
    for(i=0; i<k && y-x >= (x+i) ; i++) {
        num += (y-x) % (x+i);
    }
    num += (k-i)*(y-x);
    cout<<num<<endl;
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