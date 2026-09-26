#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void sol(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    map<int,int> mp;
    for(int i=0;i<n;i++) {
        int x = a[i];
        for(int j=0;j<20;j++) {
            int s = 0;
            while(x != 0) {
                s += (x % 10 )* (x % 10);
                x /= 10;
            }
            x = s;
        }
        mp[x]++;
    }
    int ans = 0;
    for(auto &it:mp) {
        ans += it.second * (it.second-1) /2;
    }
    cout<<ans<<endl;
    
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