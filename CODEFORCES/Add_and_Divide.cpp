#include<bits/stdc++.h>
using namespace std; 

long long Add_and_Divide(long long a , long long b){
    long long ans = 1e9; 
    for(int i =0 ; i <= 6 ; i++){
        long long x = a ; 
        if(b + i >= 2){
            long long turns = i ; 
            while(x > 0){
                x = x / (b + i); 
              
                turns++; 
            } 
            ans = min(turns , ans); 
        }
        
    }

    return ans  ; 
}


int main(){
    int t ; 
    cin>>t; 
    for(int i= 0 ; i < t ; i++){
        long long a , b ; 
        cin>>a>>b; 
        cout<<Add_and_Divide(a , b)<<endl; 
    }

}