#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void sol(){
    string s;
    cin>>s;
    int cnt1 =0;
    int cnt2 =0;
    for(int i=1;i<s.size()-1;i++) {
        if(s[i-1] == s[i+1] ) {
            if(s[i] == s[i-1])
                cnt1 = 1;
            else
                cnt2 = 1;
        }
    }
    cout<<cnt1+cnt2+1<<endl;
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