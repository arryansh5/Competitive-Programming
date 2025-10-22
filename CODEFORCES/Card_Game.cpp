#include<bits/stdc++.h>
using namespace std; 

int main(){
    string card_table , card_hand; 
    bool ans = false  ; 
    cin>>card_table; 
    for(int i = 0 ; i < 5 ; i++){
        cin>>card_hand ; 
        if(card_hand[0] == card_table[0] || card_table[1] == card_hand[1]){
            ans = true ; 
            break ;
        }
        else{
            continue; 
        }
    }

    cout<<((ans) ? "Yes" : "No");
}