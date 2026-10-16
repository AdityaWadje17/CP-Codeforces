#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void sol(){
    int n,h,k;
    cin>>n>>h>>k;
    vector<int> a(n);
    int sum = 0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        sum += a[i];
    }
    vector<int> pref(n);
    pref[0] = a[0];
    for(int i=1;i<n;i++)
        pref[i] = pref[i-1] +a[i];
 
    vector<int> maxr(n);
    maxr[n-1] = a[n-1];
    for(int i= n-2; i>=0; i--) 
        maxr[i] = max(maxr[i+1],a[i]);
 
    int time = 0;
    int reload = (h-1) / sum;
    time += (reload* k + n*reload );
    h -= (sum*reload);
    if(h<=0) {
        cout<<time<<"
";
        return;
    }
    int minl = a[0];
    for(int i=0;i<n;i++) {
        minl = min(minl,a[i]);
        int currsum = pref[i] + maxr[i+1] - minl;
        if(h <= currsum || h <= pref[i]) {
            cout<<time+i+1<<"
";
            return;
        }
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