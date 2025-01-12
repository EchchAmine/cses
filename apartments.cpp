#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vll = vector<ll> ; 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    ll n , m , k ; cin >> n >> m >> k  ; 
    vll apps(n) , sizes(m) ;
    for(int i =0;i<n;i++) cin >> apps[i];
    for(int i =0;i<m;i++) cin >> sizes[i];
     
    sort(apps.begin() , apps.end() , [](auto a,auto b){return a<b;}) ;
    sort(sizes.begin() , sizes.end() , [](auto a,auto b){return a<b;}) ;

    int ans = 0 ; int i = 0 , j = 0 ; 
    while(i < n && j < m){
        ll a = apps[i] , c = sizes[j] ; 
        ll diff = abs(a-c) ; 
        if(diff <= k){
            ans++ ; i++ ; j++;
        }else {
            if(a > c){
                j++ ; 
            }else{
                i++; 
            }
        }
    }
    cout << ans ; 


    return 0;
}
