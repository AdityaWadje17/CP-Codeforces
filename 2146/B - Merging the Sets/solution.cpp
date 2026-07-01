#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
        ll n,m;
        cin>>n>>m;
        vector<vector<int>> sets(n);
        vector<int> map(m+1,0);
        for(int i=0;i<n;i++){
            int l;
            cin>>l;
            sets[i].resize(l);
            for(int j=0;j<l;j++){
                cin>>sets[i][j];
                map[sets[i][j]]++;
            }
        }
 
        for(int i=1;i<=m;i++){
            if(map[i]==0){
                cout<<"NO"<<endl;
                return;
            }
        }
        bool red=true;
        int redcount=0;
        for(int i=0;i<n;i++){
            red=true;
            for(auto x:sets[i]){
                if(map[x]== 1){
                    red=false;
                    break;
                }
            }
            if(red){
                redcount++;
                if(redcount>=2){
                    cout<<"YES"<<endl;
                    return;
                }
            }
        }
        cout<<"NO"<<endl;
}
 
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}