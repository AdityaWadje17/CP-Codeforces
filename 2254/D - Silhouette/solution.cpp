#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void sol(){
    int n;
    cin >> n;
    vector<int> b(n);
    for(int i=0;i<n;i++) 
        cin >> b[i];
    map<int,int> mpp;
    for(int i=0;i<n;i++)
        mpp[b[i]]++;
    if(mpp.count(0) == 0) {
        cout<<-1<<endl;
        return;
    }
    map<int,int> ans;
    int prevSh = 0, prevCnt = 0, start = 0;
    for(auto it: mpp) {
        if(it.first != 0) {
            int diff = it.first - prevSh;
            if(diff % prevCnt != 0) {
                cout<<-1<<endl;
                return;
            }
            if(diff/prevCnt <= start) {
                cout<<-1<<endl;
                return;
            } 
            ans[prevSh] = diff/prevCnt;
           start = diff/prevCnt; 
        }
        prevSh = it.first;
        prevCnt = it.second;
        ans[prevSh] = start + 1;
    }
    for(int i=0;i<n;i++) {
        cout<<ans[b[i]]<<" ";
    }
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