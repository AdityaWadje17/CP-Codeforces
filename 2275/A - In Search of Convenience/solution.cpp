#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '
'
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back
template<typename T> inline void input(T& x) {cin >> x;}
template<typename T, typename... S> inline void input(T& x, S&... args) {cin >> x; input(args ...);}
template<typename T> inline void print(T x) {cout << x << '
';}
template<typename T, typename... S> inline void print(T x, S... args) {cout << x << ' '; print(args ...);}
#define loop(i,j,k) for(int i = (j); i < (k); i++)
#define rloop(i,j,k) for(int i = (j); i>= (k); i--)
#define inputvec(v,n) for(int itr = 0; itr < (n); itr++){cin >> (v)[itr];}
#define printvec(v) {for(auto &e : (v)){cout << e << ' ';} cout << '
';}
 
void sol(){
    int x,y,R;
    input(x,y,R);
    print(x-R,y);
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