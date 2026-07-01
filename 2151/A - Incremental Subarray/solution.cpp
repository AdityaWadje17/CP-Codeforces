#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
        int n,m;
        cin>>n>>m;
        vector<int> a(m);
        for(int i=0;i<m;i++)
            cin>>a[i];
        for(int i=1;i<m;i++){
            if(a[i]!=a[i-1]+1){
                cout<<1<<endl;
                return;
            }
        }
        cout<<n-a[m-1]+1<<endl;
    
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
 
 