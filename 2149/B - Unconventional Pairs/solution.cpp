#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n;
    cin>>n;
    vector<int> a(n);    
    for(int i=0;i<n;i++)
        cin>>a[i];
    int maxi=INT_MIN;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i+=2){
        maxi=max(maxi,abs(a[i]-a[i+1]));
    }
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