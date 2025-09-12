#include<bits/stdc++.h>
using namespace std;

void Nearly_Good_Numbers(long long a , long long b){
   if(b == 1){
    cout<<"No";
   }
   if(b == 2){
    cout<<"Yes"<<endl<<a<<" "<<a*3<<" "<<a*4<<endl; 
   }
   else{
    cout<<"Yes"<<endl<<a<<" "<<a*(b - 1)<<" "<<a*b<<endl;
   }
}


int main(){
    long long t ; 
    cin>>t; 
    for(long long  i =0 ; i < t ; i++){
        long long a , b ; 
        cin>>a>>b; 
        Nearly_Good_Numbers(a , b); 
    }
}