#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int maxi = *max_element(a.begin(), a.end());
    cout<<maxi<<endl;
}
 
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
        sol();
    return 0;
}