#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define int long long
 
void sol(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++) 
        cin>>a[i];
    int score = 0;
    ordered_set s;
    for(int i=0;i<n;i++){
        s.insert(i);
    }
    int m = n;
    while(m >= k) {
        int i= *s.find_by_order(k-1);
        int j= *s.find_by_order(m-k);
        if(a[i] > a[j]){
            score += a[i];
            s.erase(i);
        }
        else{
            score += a[j];
            s.erase(j);
        }   
        m--;
    }
    cout<<score<<endl;
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