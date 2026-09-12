#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void sol(){
    int n;
    cin>>n;
    vector<int> a(n);
    int cnt1 = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1)
            cnt1++;
    }
    if(cnt1 > (n-1)/2) {
        cout<<"Bessie"<<endl;
    }
    else
        cout<<"Elsie"<<endl;
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