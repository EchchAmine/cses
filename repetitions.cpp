#include <iostream>
#include <string>


using namespace std ;
using ll = long long ;

int main() {
    cout.tie(0) ; cin.tie(0); 

    string s ; cin >> s ;

    char lastCH = s[0] ; ll ans = 1 , curr = 1 ; 

    for(int i = 1 ; i < s.size() ; i++){
        if(lastCH == s[i]){
            curr++ ;
        }else {
            ans = max(ans , curr) ; 
            curr = 1 ; lastCH = s[i] ; 
        }
        ans = max(ans , curr) ; 
    }

    cout << ans ; 

    return 0 ; 
}