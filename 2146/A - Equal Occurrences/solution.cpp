#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(), a.end());
        map<ll,ll> mp;
        for(auto i:a)
            mp[i]++;
        
        vector<ll> freq;
        for (auto &i : mp)
            freq.push_back(i.second);
 
        ll ans=0;
        for (ll i:freq){
            ll count=0;
            for (ll x:freq) {
                if (x>=i)
                    count++;
            }
            ans = max(ans,i*count);
        }
        cout<<ans<<endl;
    }
    return 0;
}