#include <bits/stdc++.h>
using namespace std;
#define int long long
#define loop(i,j,k) for(int i = (j); i < (k); i++)
#define rloop(i,j,k) for(int i = (j); i>= (k); i--)
#define pb push_back
 
void sol(){
    int n;
    cin>>n;
    vector<int> a(n);
    loop(i,0,n)
        cin>>a[i];
    int odd = 0;
    int even = 0;
    loop(i,0,n) {
        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    if((even == 1 && odd == 1) || (even == 0 && odd == 3))
        cout<<"Larpity"<<"
";
    else
        cout<<"Moggity"<<"
";
 
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