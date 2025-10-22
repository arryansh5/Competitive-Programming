#include<bits/stdc++.h>
using namespace std; 


int main(){
    int n ; 
    string my_ans ; 
    cin>>n ; 
    for(int i = 0 ; i < n ; i++){
        int x ; 
        cin>>x; 
        
        if(x == 1){
            my_ans = "Hard"; 
            break ; 
        }
        else { 
            my_ans = "Easy"; 
            continue; 
        }
    }

    cout<<my_ans<<endl; 
    
}