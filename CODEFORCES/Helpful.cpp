#include<bits/stdc++.h>
using namespace std; 

int main(){
    string str  ; 
    cin>>str;
    sort(str.begin(), str.end());
    for(int i = 0 ; i < str.length() ; i++){
        if(str[i] != '+'){
            if(i == str.length() - 1){
                cout<<str[i]; 
            }else cout<<str[i]<<"+"; 
        }
    }
}