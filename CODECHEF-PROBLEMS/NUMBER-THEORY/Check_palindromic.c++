#include<iostream>
using namespace std; 

int main(){
    int  N = 11211; 
 
    int dup = N ; 
    int rev = 0 ; 

    while(N > 0){
        int ld = N % 10 ; 
        rev =( rev * 10 )+ ld ; 
        N = N /  10 ;
    }
    cout<<(rev == dup )? true : false ; 

}