#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void sol(){
    int x,y;
    cin>>x>>y;
    int poss = 0 ^ (x+y);
    int ans = -1;
    int i = 0;
    int opr = 0;
    int sum = x+y;
    for(int i=29; i>=0; i--) {
        int bit = 1<<i;
        if((sum & bit) && (opr + bit <= x)) {
            opr += bit;
        }
    }
    cout<<poss<<" "<<x-opr<<endl;
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