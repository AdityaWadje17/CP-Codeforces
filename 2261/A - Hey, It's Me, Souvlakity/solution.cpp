#include <bits/stdc++.h>
using namespace std;
#define int long long
#define loop(i,j,k) for(int i = (j); i < (k); i++)
#define rloop(i,j,k) for(int i = (j); i>= (k); i--)
#define pb push_back
 
void sol(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    int cnt = 0;
    loop(i,0,n) {
        if(s[i] == '1') {
            cnt++;
            maxi=max(maxi,i+1);
            mini = min(mini,i+1);
        }
    }
    if(cnt == 1) {
        cout<<0<<"
";
        return;
    }
    if(cnt == 2) {
        cout<<1<<"
";
        return;
    }
    cout<<maxi-mini<<"
";
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