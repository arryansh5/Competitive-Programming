#include<bits/stdc++.h>
using namespace std; 

long long Multiplication_Table(long long n , long long m , long long k)
{
    long long low = 1 , high = n * m ; 
    long long ans = 1 ; 
    while(low <= high){
        long long mid = low + (high - low) / 2 ; 
        long long count = 0 ; 
        for(long long i = 1 ; i <= n ; i++){
            count += min(m , mid/i ); 
        }
        if(count < k){
            low = mid + 1 ; 
        } else { 
            ans = mid ; 
            high = mid - 1 ;
        }
    }
    return ans  ; 
}



int main(){

    long long n , m , k ; 
    cin>>n>>m>>k; 
    cout<<Multiplication_Table(n ,  m, k)<<endl; 

}