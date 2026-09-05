#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void sol(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n; i++) 
        cin>>a[i];
    int odd = 0;
    int even1 = 0;
    int even2 = 0;
    map<int,int> mpp;
    for(int i=0;i<n;i++) {
        mpp[a[i]]++;
    }
    for(auto it: mpp) {
        if(it.first %2 != 0) {
            odd += it.second;
        }
    }
    // even terms having 4k as diff
    for(auto it: mpp) {
        if(it.first % 4 == 0)
            even1 += it.second;
        if(it.first % 4 == 2)
            even2 += it.second;
    }
    cout<<max(even1, max(odd, even2))<<endl;
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