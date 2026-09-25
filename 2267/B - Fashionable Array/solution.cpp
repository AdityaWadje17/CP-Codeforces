#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void sol(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) 
        cin>>a[i];
    map<int,int,greater<int>> mpp;
    for(int i=0;i<n;i++) 
        mpp[a[i]]++;
    vector<int> ans;
    vector<int> diff;
    for(auto &it: mpp) {
        diff.push_back(it.first);
    }
    while(ans.size() < n) {
        for (int it : diff) {
            if (mpp[it] > 0) {
                ans.push_back(it);
                mpp[it]--;
            }
        }
    }
    for(auto x: ans) 
        cout<<x<<" ";
    cout<<endl;
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