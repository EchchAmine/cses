#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vs = vector<string> ; 


void dfs(vs& grid , int i  , int j){
    if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] != '.'){
        return ; 
    }
    grid[i][j] = '#' ; 
    dfs(grid , i - 1, j) ; 
    dfs(grid , i + 1, j) ; 
    dfs(grid , i , j + 1) ; 
    dfs(grid , i , j - 1) ; 
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int n,m ; cin >> n >> m  ; 
    vs map(n) ; 
    for(int i=0;i<n;i++) cin >> map[i] ; 
    int ans =0; 
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            if(map[i][j] == '.'){
                ans++ ; dfs(map,i,j) ; 
            }
        }

    cout << ans ;

    return 0;
}
