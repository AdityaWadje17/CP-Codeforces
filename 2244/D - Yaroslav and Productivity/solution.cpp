#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void sol() {
    int m,n;
    cin>>n>>m;
 
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++) 
        cin>>a[i];
    for(int i=0;i<m;i++) 
        cin>>b[i];
    sort(b.begin(),b.end());
    int sum =0, ans =0;
    int j=0;
    for(int i=0;i<n;i++) {
        sum += a[i];
        if(j < m && (i+1)== b[j]) {
            ans += abs(sum);
            sum=0;
            j++;
        }
    }
    ans += sum;
    cout<<ans<<endl;
 
}
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--)
        sol();
 
    return 0;
}