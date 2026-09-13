#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void sol(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    vector<int> b;
    for(int i=0;i<n;i++) {
        if(a[i] == i+1)
            continue;
        else {
            b.push_back(a[i]);
        }
    }
    if(is_sorted(b.begin(), b.end(), greater<int>()))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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