#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void sol(){
    int n;
    char c;
    cin>>n>>c;
    string s;
    cin>>s;
    int coins = 0;
    for(int i=0;i<s.size()/2; i++) {
        if(s[i] == s[n-i-1]) {
            continue;
        }
        else if((s[i] == c && s[n-i-1] != c) || (s[i] != c && s[n-i-1] == c)) {
            coins++;
        }
        else
            coins +=2;
    }
    cout<<coins<<endl;
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