#include<bits/stdc++.h>
using namespace std; 

int main(){
    long long n , k; 
    cin>>n>>k; 
    for(long long i = 0 ; i < k  ; i++){
        if(n%10 != 0){
            n = n - 1 ; 
        }else{
            n = n / 10 ; 
        }
    }
    cout<<n; 
}