#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void sol(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> freq(10,0);
    for(auto it : s) 
        freq[it-'0']++;  
    auto check = [&](int x) {
        for(int i=0; i<= min(freq[1], x); i++) {
            int f0 =  freq[0] - (x-i);
            int f1 = freq[1] - i;
            if(f0 + f1 < i)
                continue;
            if(f0 < 0)
                continue;
            if(freq[2]+ freq[3]+freq[4]+freq[5]+ f1 + f0  < x + i)
                continue;
            return true;
        }
        return false;
    };
    int l = 0;
    int  r= n/4;
    while(l != r) {
        int mid = (l+r+1) /2;
        if(check(mid) == true)
            l = mid;
        else
            r = mid-1;
    }
    cout<<l<<endl;
     
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