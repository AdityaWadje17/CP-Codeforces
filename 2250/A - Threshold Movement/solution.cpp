#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void sol() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    if( n % 2 != 0) {
        cout<<"NO"<<endl;
        return;
    }
    int evenplace =0;
    int oddplace =INT_MAX;
 
    for(int i=0;i<n;i++) {
        if((i+1) %2 != 0)
            oddplace = min(oddplace,a[i]);
        else
            evenplace = max(evenplace,a[i]);
    }
    if(evenplace +1 < oddplace) {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
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