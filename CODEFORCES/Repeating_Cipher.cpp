#include<bits/stdc++.h>
using namespace std; 

// https://codeforces.com/problemset/problem/1095/A

int main(){
    string s ;  int n ; 
    cin>>n;
    cin>>s; 
    int ito = 0 , i = 1 ; 
    string ans = ""; 
    while(ito < s.length()){
        ans += s[ito]; 
        ito += i;
        i++; 
    }
    cout<<ans<<endl; 
}