#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void sol(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    vector<int> pref(n+1,0);
    for(int i=1;i<=n;i++)
        pref[i] = pref[i-1] + a[i-1];
    vector<int> cnt(k,0);
    int ans = 0;
    for(int i=1; i<=n; i++) {
        if(i-k-1 >= 0) {
            cnt[pref[i-k-1] % k]++;
        }
        ans += cnt[pref[i] % k];
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