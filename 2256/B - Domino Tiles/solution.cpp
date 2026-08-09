#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void sol(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int b1[2] = {1, 1};
    int b2[2] = {1, 1};
 
    for(int i =0 ;i<n;i++) {
        if(s[i]== '?')
            continue;
        int req = ((s[i]-'0') + (i /2)) % 2 ;
        if(i % 2 == 0) 
            b1[1-req] = 0;
        else
            b2[1-req] = 0;
    }
    int ways = (b1[0]+b1[1])*(b2[0]+b2[1]);
    cout<<ways%998244353<<endl;
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