#include <bits/stdc++.h>
using namespace std;
#define int long long
#define loop(i,j,k) for(int i = (j); i < (k); i++)
#define rloop(i,j,k) for(int i = (j); i>= (k); i--)
#define pb push_back
 
void sol(){
    int n;
    cin>>n;
    vector<int> l(n), r(n), u(n), v(n);
    loop(i,0,n)
        cin >> l[i] >> r[i] >> u[i] >> v[i];
    rloop(m,n,1) {
        int j=1;
        loop(i,0,n) {
            if(j>m)
                break;
            int x= m-j+1;
            if((j<l[i] || j>r[i]) && (x<u[i] || x>v[i])) {
                j++;
            }
            if(j == m+1) {
                cout<<m<<"
";
                return;
            }
        }
    }
    cout<<0<<"
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