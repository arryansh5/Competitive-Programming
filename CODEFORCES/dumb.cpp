#include<bits/stdc++.h>
using namespace std; 

int main(){
    int rev = 0  , n = 27; 
    while(n > 0 ){
        int n1 = n%10;

        if(9 - n1 != 0) n1 = min(n1 , 9 - n1) ; 
        
        rev = rev * 10 + n1 ; 
        n = n / 10 ; 
    }
    n = 0 ; 
    while(rev > 0 ){
        int n1 = rev%10;
        n = n * 10 + n1 ; 
        rev = rev / 10 ; 
    }
    cout<<n<<endl; 
}