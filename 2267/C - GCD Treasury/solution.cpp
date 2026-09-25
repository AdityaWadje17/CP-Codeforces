#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void sol(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++) 
        cin>>a[i];
    vector<int> primes;
    int ans = 0;  
    for(int i = 2; i*i <= x;i++) {
        if(x % i == 0) {
            primes.push_back(i);
            while(x % i == 0) {
                x /= i;
            }
        }
    }
    if(x > 1)
        primes.push_back(x);
    for(int it : primes) {
        int sum =0;
        for(int i=0;i<n;i++) {
            if( a[i] % it == 0) {
                sum += a[i];
            }
        }
        ans = max(ans,sum);
    }
    cout<<ans<<endl;
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