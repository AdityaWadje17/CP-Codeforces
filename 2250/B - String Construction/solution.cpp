#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void sol() {
    int n,k;
    cin>>n>>k;
    if( k == n-1) {
        cout<<-1<<endl;
        return;
    }
    int req = n-k;
    int n1 = (n+1)/2 - (req+1)/2 +1;
    int n0 =  n/2 - req/2 +1;
    string s = "";
    for(int i=0;i<req;i++) {
        if(i==0) 
            s += string(n1, '1');
        else if ( i==1)
            s += string(n0, '0');
        else if (i%2 == 0)
            s += '1';
        else
            s+= '0';
 
    }
    cout<<s<<endl;
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