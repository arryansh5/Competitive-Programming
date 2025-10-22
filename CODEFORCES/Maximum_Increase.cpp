#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n , x2 , x1, count = 1 , max_count = 1   ; 
    cin>>n; 
    cin>>x1; 
    
    for(int i = 1 ; i < n ; i++){
        cin>>x2;
        if(x2 > x1){
            count++ ; 
        } else {
            max_count = max(count , max_count); 
            count= 1 ; 
        }
        x1 = x2;

    }
    max_count = max(max_count , count); 
    cout<<max_count<<endl; 
}