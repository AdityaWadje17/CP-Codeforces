#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void sol() {
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    vector<int> pairs(n,0);
    for(int i=0;i<n-1;i++) {
        if(s[i] == s[i+1]) 
            pairs[i+1] = pairs[i] + 1;
        else
            pairs[i+1] = pairs[i];
    }
    while(q--) {
        int l,r,k;
        cin>>l>>r>>k;
        l--;
        r--;
        int num = pairs[r]-pairs[l];
        if((num+1)/2 <= k) 
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
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