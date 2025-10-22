#include<bits/stdc++.h>
using namespace std; 

int main(){
    int k, n , w; 
    cin>>k>>n>>w;
    int formula = abs(n - (k*((w*(w+1))/2))); 
    if(n < (k*((w*(w+1))/2))){
        cout<< abs(n - (k*((w*(w+1))/2)));
    }else{
        cout<<0; 
    }
    

}