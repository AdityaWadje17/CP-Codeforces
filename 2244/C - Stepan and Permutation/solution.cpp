#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void sol() {
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> a(n);
    for(int i=0;i<n;i++) 
        cin>>a[i];
    int gcd = __gcd(x,y);
    for(int i=0;i<n;i++) {
        if(a[i]%gcd != (i+1)%gcd){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--)
        sol();
 
    return 0;
}