#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n;
    cin>>n;
    
    if(n == 2){
        cout<<-1<<endl;
        return;
    }
    else if(n ==1){
        cout<<1<<endl;
        return;
    }
    else {
        cout<<1<<" "<<2<<" ";
        int i =3;
        for(int j=3;j<=n;j++) {
            cout<<i<<" ";
            i *= 2;
        }
        cout<<endl;
    }
    
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