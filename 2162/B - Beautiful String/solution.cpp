#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n;
    cin>>n;
    vector<int> b;
    string a;
    cin>>a;
    for(int i=0;i<n;i++){
        if(a[i]=='1'){
            b.push_back(i+1);
        }
    }
    cout<<b.size()<<endl;
    for(int i=0;i<b.size();i++)
        cout<<b[i]<<" ";
    cout<<endl;
 
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