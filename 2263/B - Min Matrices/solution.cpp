#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void sol(){
    int n,k;
    cin>>n>>k;
    if(k> (2*n-1) || k < n) {
        cout<<-1<<endl;
        return;
    }
    int dig = 2*n-k;
    vector<vector<int>> a(n, vector<int>(n, 0));
    for(int i=0;i<dig;i++) {
        a[i][i] = i+1;
    }
    for(int i= dig; i<n;i++) {
        a[i][0] = i+1;
    }
    int cont = n+1;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(a[i][j] == 0) {
                a[i][j] = cont++;
            }
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<a[i][j] <<" ";
        }
    cout<<endl;
    }
 
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