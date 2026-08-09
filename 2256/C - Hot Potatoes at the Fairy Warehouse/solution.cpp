#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void sol(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int oddSum = 0;
    int evenSum =0;
    for(int i=0;i< 2*n;i++) {
        if(s[i] == '1' && s[i+1]== '0' && i%2==0)
            oddSum++;
        else if(s[i] == '1' && s[i+1]== '0' && i%2==1)
            evenSum++;
        else if(s[i] == '1' && s[i+1]== '1' && i%2==1)
            oddSum++;
        else if(s[i] == '1' && s[i+1]== '1' && i%2==0)
            evenSum++;
 
    }
    // cout<<oddSum<<" "<<evenSum<<endl;
    if(s[2*n-1] == '1' && s[0] == '0')
        evenSum++;
    else if(s[2*n-1] == '1' && s[0] == '1')
        oddSum++;
        
 
    cout<<oddSum<<" "<<evenSum<<endl;
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