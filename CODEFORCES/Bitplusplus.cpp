#include<bits/stdc++.h>
using namespace std; 

int main(){
    long long n , x = 0 ; 
    cin>>n; 
    for(int i  = 0 ; i < n  ; i++){
        string op ; 
        cin>>op; 
        x += (op[1] == '+') ? 1 : -1 ; 
    }

    cout<<x; 
    
}