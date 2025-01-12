#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vll = vector<ll> ; 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    ll mod = 1e9+7 ; 
    ll n ; cin >> n ;
    vll dp(n+1 , 0) ; dp[0] = 1 ; 
    for(ll i = 1 ; i <= n ; i++){
        ll nw = 0 ; 
        for(ll coin = 1 ; coin <= 6 ; coin++ ){
            if(i-coin < 0 ) continue;
            nw += dp[i-coin] ; 
        }
        dp[i] = nw % mod  ;
    }
    cout << dp[n] ; 

    return 0;
}
