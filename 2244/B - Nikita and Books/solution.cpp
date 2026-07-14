#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void sol() {
    int n;
    cin>>n;
    vector<int> a(n), pref(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    pref[0] = a[0];
    for(int i=1;i<n;i++)
        pref[i] = pref[i-1]+a[i];
    for(int i=0;i<n;i++) {
        int req = (i+1)*(i+2)/2;
        if(pref[i] < req) {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES
";
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