#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void sol(){
    int a,b;
    cin>>a>>b;
    if(b >= a) {
        cout<<-1<<endl;
        return;
    }
    else {
        cout<<min(b,a-b)<<endl;
    }
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