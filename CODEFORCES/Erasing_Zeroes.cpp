#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t ; 
    cin>>t ;
    for(int i  = 0 ; i < t ; i++){
        string s ; 
        cin>>s; 
        int count_zeros = 0 ; 
        int curr = -1 ; 
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == '1'){
                if(curr == -1) curr = i ; 
                else {
                    count_zeros += i - curr - 1 ; 
                }
                curr = i ; 
            }
        }
        cout<<count_zeros<<endl ; 
    }
}