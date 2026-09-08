#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void sol(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int cnt0 = 0;
    for(auto it : a){
        if(it == 0)
            cnt0++;
    }
    if(cnt0 < 2){
        cout<<-1<<endl;
        return;
    }
    if(a[0] == 0 && a[n-1] == 0) {
        cout<<0<<endl;
        return;
    }
    if(a[0] == 0 && a[n-1] != 0) {
        cout<<1<<endl;
        return;
    }
 
    if(a[0] != 0 && a[n-1] == 0) {
        cout<<1<<endl;
        return;
    }
    cout<<2<<endl;
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