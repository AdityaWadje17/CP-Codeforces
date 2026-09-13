#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void sol(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) 
        cin>>a[i];
    int k = m-1;
    map<int,int> mpp;
    int sum =0;
    int size = 0;
    int ans = LLONG_MIN;
    for(int i=1;i<=n;i++) {
        if(i>=m) {
            int score = m*a[i]-sum;
            ans = max(ans,score);
        }
        if(k>0 && i<n) {
            if(size < k) {
                mpp[a[i]]++;
                sum += a[i];
                size++; 
            }
            else {
                auto it = prev(mpp.end());
                if(a[i] < it->first) {
                    sum -= it->first;
                    it->second--;
                    if(it->second == 0)
                        mpp.erase(it);
                    sum += a[i];
                    mpp[a[i]]++;
                }
            }
        }
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