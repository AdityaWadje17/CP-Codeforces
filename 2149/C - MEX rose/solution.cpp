#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n),x(k,0);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int count=0;
   
    for(int i=0;i<n;i++){
        if(a[i]==k)
            count++;
        if(a[i]<k)
            x[a[i]]++;   
    }
    int count1=0;
    for(int i=0;i<k;i++){
        if(x[i]==0)
            count1++;
    }
    cout<<max(count,count1)<<endl;
    
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