#include<bits/stdc++.h>
using namespace std;
#define int long long
#define clz __builtin_clzll
void sol(){
    int a,b;
    cin>>a>>b;
    int lena=clz(1)-clz(a);  // to count the number of digits peresent after the last 1
    int lenb=clz(1)-clz(b);
 
    if(a==b){
        cout<<0<<endl;
        return;
    }
    if(lena==lenb){
        cout<<1<<endl;
        cout<<(a^b)<<endl;
        return;
    }
    else if(lena<lenb){
        cout<<-1<<endl;
        return;
    }
    else{
        cout<<2<<endl;
        cout<<(a^b^(1LL<<lena))<<" ";
        cout<<(1LL<<lena)<<endl;
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