#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        vector<int> pos(n+1);
 
        for (int i=0;i<n;i++) {
            cin>>p[i];
            pos[p[i]]=i;
        }
 
        bool ok =true;
        int l=pos[n], r=pos[n]; 
        for (int x=n-1;x>=1;x--) {
            l=min(l,pos[x]);
            r=max(r,pos[x]);
            if (r-l+1 != n-x+1) {
                ok=false;
                break;
            }
        }
 
        if(ok) cout<<"YES
";
        else cout<<"NO
";
    }
    return 0;
}