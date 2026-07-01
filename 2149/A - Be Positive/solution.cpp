#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int count1=0;
    int count2=0;
 
    for(int i=0;i<n;i++){
        if(a[i]==(-1))
            count1++;
        if(a[i]==0)
            count2++;
    }
    int x=((count1)%2)*2;
    cout<<count2+x<<endl;
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