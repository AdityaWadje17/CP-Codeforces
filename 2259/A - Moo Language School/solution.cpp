#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void sol(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int ans = 0;
    for(int i=0; i<n; i+=k) {
        bool f0 = false;
        for(int j=i;j<(i+k); j++) {
            if(s[j] == '0'){
                f0 = true;
                break;
            }
        }
        if(!f0)
            ans++;
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