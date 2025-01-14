#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vll = vector<ll> ; 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);


    int n , m ; cin >> n  >> m ; 
    vector<vector<int>> adj(n+1) ; 
    while(m--) {
        int a , b ; cin >> a >> b ; 
        adj[a].push_back(b) ; 
        adj[b].push_back(a) ; 
    }

    int even = 0, odd = 0 ; 
    for(int i = 1 ; i <= n ; i++){
        if(adj[i].size() %2 == 0) even++; 
        else odd++;
    }

    
    if(odd == 0 || odd == 2) cout << "POSSIBLE" ; 
    else cout << "IMPOSSIBLE" ;  

    return 0;
}
