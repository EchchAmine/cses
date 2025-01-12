#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    ll n ; cin >> n ; vector<ll> arr(n);
    for(int i = 0; i < n ; i++) cin >> arr[i] ; 
    
    sort(arr.begin() , arr.end()) ; 
    ll ans = 1 ; 

    for(int i = 1; i<n ; i++) ans += (arr[i] != arr[i-1]) ; 
    cout << ans << endl ; 
    




    return 0;
}
