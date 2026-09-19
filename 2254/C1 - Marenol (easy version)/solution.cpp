#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void sol(){
    int n;
    cin>>n;
    string a,b;
    cin>>a;
    cin>>b;
    int evena= 0,odda=0;
    int evenb = 0, oddb= 0;
    for(int i=0;i<n;i++) {
        if((i+1) %2 == 0) {
            if(a[i] == '1')
                evena++;
            if(b[i] == '1')
                evenb++;
        }
        else {
            if(a[i] == '1')
                odda++;
            if(b[i] == '1')
                oddb++;
        }
    }
    if(odda == oddb && evena == evenb)
        cout<<"YES"<<endl;
    else
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