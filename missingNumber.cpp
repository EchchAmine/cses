#include <iostream>



using namespace std ;

int main() {
    cout.tie(0) ; cin.tie(0); 

    long long n,c ; cin >> n ; c = n ;
    
    long long ss = 0 , k; 
    while(--c){
        cin >> k ; ss += k ; 
    }

    cout << ( ( n* (n+1) )/ 2 ) - ss ; 
    
    return 0 ; 
}