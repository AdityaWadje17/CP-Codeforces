#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void sol(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    vector<int> dif(n+1,0);
    for(int i=1; i<=n;i++) {
        int mex = a[i-1];
        int l = mex*i;
        int r = (mex+1)*i -1;
        if(l >= n)
            continue;
        r = min(r, n-1);
        dif[l]++;
        if(r < n-1)
            dif[r+1]--;
    }
    vector<int> b;
    int pref = 0;
    for(int i=0;i<n;i++) {
        pref += dif[i];
        if(pref == 0)
            b.push_back(i);
    }
    cout<<b.size()<<endl;
    for(auto it: b) {
        cout<<it<<" ";
    }
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