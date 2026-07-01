#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        vector<ll> b(k);
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<k;i++)
            cin>>b[i];
        sort(a.rbegin(),a.rend());
        sort(b.begin(),b.end());
        ll c=0;
        ll cost=0;
        for(ll i=0; i<k;i++){
        if(c+b[i]>n) break;
        if(b[i]==1){
            c++;
            continue;
        }
        cost+=accumulate(a.begin()+c, a.begin()+c+b[i], 0LL);
        
        cost-=a[c + b[i] - 1];
        c+=b[i];
    }
    for(int i=c;i<n;i++){
        cost+=a[i];
    }
    cout<<cost<< endl;
       
    }
    return 0;
}