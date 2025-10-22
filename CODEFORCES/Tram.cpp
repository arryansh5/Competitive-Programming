#include<bits/stdc++.h>
using namespace std; 


int main(){
    int n ; 
    cin>>n ;
    int max_cap = 0 , curr_capp = 0 ; 
    for(int i = 0 ; i < n ; i++){
        int a , b ; 
        cin>>a>>b;
        curr_capp += b ; 
        curr_capp = curr_capp - a ;

        max_cap = max(max_cap , curr_capp); 
    }
    cout<<max_cap; 
}