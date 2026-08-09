#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void sol(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) 
        cin >> arr[i];
    map<int,int> mpp;
    int oddSum = 0;
    int evenSum = 0;
    mpp[0] =1;
    for(int i=0; i<n; i++) {
        if(i % 2 == 0)
            evenSum += arr[i];
        else
            oddSum +=  arr[i];
        int diff = oddSum - evenSum;
        
        if(mpp[diff] > 0) {
            cout<<"YES"<<endl;
            return;
        }
        mpp[diff]++;
    }
    cout<<"NO"<<endl;
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