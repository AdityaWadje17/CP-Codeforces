#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int time =0;
    int len =0;
    for(int i=0;i<n;i++) {
        if(s[i]=='#')
            len++;
        else {
            time = max(time, (len+1)/2);
            len =0;
        }
    }
    time = max(time , (len+1)/2);
    cout<<time<<endl;
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