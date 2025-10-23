#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t  ; 
    cin>>t ;
    for(int i  = 0 ; i < t ; i++){
        int n ; 
        cin>>n; 
        int root = sqrt(n); 
        if(root * root == n) cout<<0<<' '<<root<<endl; 
        else cout<<-1<<endl; 
    }
}