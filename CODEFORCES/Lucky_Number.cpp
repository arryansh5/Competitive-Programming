#include<bits/stdc++.h>
using namespace std; 
// https://codeforces.com/problemset/problem/110/A
string lucky(long long n){
    if(n < 10){
        return "NO"; 
    }
    int count_number = 0 ; 
    while(n > 0){
        int last_check = n % 10 ; 
        
        if(last_check == 4 || last_check == 7){
            count_number++; 
        }
        

        n = n / 10  ; 
    }
    if(count_number == 4 || count_number == 7 ) return "YES"; 
    else return "NO"; 
}
int main(){
    long long n ; 
    cin>>n; 
    cout<<lucky(n)<<endl; 

    
}