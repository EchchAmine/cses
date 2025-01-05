#include <iostream>
#include <sstream>
#include <vector>

using namespace std;
using vi = vector<int>;


int find_rep(int x , vi &link) {
    while(x != link[x]) x = link[x] ; 
    return x ; 
}


bool same(int a, int b ,vi &link) {
    return find_rep(a, link) == find_rep(b, link);
}

void unite(int a , int b ,vi &link , vi &size){
    if(same(a,b,link)) return ;
    a = find_rep(a ,link) ; 
    b = find_rep(b ,link) ;
    if(size[a] < size[b]) swap(a,b)  ; 
    size[a] += size[b] ; 
    link[b] = a ; 
}



int main(){
    int n = 10 ; 
    vi link(n+1) , size(n+1,1);
    for(int i = 1 ; i <= n ; i++) link[i] = i ; 





    return 0 ; 
}