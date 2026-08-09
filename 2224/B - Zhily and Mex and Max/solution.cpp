#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void sol(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int maxi = *max_element(a.begin(), a.end());
    vector<int> newArr;
    newArr.push_back(maxi);
    vector<int> leftOver;
    for(int i=0; i<n; i++) {
        if(a[i] != maxi) {
            leftOver.push_back(a[i]);
        }
        else
            continue;
    }
    vector<int> freq(n+2, 0);
    for(int i : a){
        if(i <= n)
            freq[i]++;
    }
    if(maxi <= n)
        freq[maxi]--;
    for(int i=0;i<=n;i++) {
        if(freq[i] > 0) {
            newArr.push_back(i);
            freq[i]--;
        }
    }
    for(int i=0;i<=n;i++) {
        while(freq[i] > 0) {
            newArr.push_back(i);
            freq[i]--;
        }
    }
    for(int i : a) {
        if( i > n)
            newArr.push_back(i);
    }
    vector<int> mpp(n+2, 0);
    int curMex = 0 ;
    int ans = 0;
    for(int i=0;i<n;i++) {
        if(newArr[i] <= n)
            mpp[newArr[i]]++;
        while(mpp[curMex] > 0) 
            curMex++;
        ans += (curMex + maxi);
    }
    cout<<ans<<endl;
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