#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void sol(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) 
        cin>>a[i];
    int l = 0, r= n-1;
    for(int i=0;i<n;i++) {
        if(a[i] == 1 || a[i] == -1){
            a[i] = 1;
            l = i;
            break;
        }
    }
    for(int i=n-1;i>=0; i--) {
        if(a[i] == 1 || a[i] == -1) {
            a[i] = 1;
            r = i;
            break;
        }
    }
    for(int i=l+1; i<r; i++) {
        if(a[i] == -1)
            a[i] = 0;
    }
    for(auto it: a)
        cout<<it<<" ";
    cout<<endl;
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