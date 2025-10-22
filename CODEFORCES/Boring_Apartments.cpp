#include<bits/stdc++.h>
using namespace std; 
int return_the_cal(int n){
    if(n == 4) return 10 ; 
    if(n == 3) return 6 ;
    if(n == 2) return 3 ;
    if(n == 1) return 1 ;
}
int main(){
    int t ; 
    cin>>t; 
    for(int i =0 ; i < t ; i++){
        int n; 
        cin>>n; 
        int len = floor(log10(n)) + 1;
        n = (n % 10 - 1) * 10 + return_the_cal(len);
        cout<<n<<endl;
    }
}