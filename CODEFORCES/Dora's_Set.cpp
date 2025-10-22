#include<bits/stdc++.h>
using namespace std; 

int Dora_set(long long l , long long r){
    long long start = l ; 
    long long end = r - 2; 
    if(start % 2 == 0) start++; 
    
    if(end % 2 == 0){
        end--; 
    }

    if(start > end){
        return 0 ; 
    }

    return (end - start)/ 4 + 1 ; 

}

int main(){
    int t ; 
    cin>>t ; 
    for(int i = 0 ; i < t ; i++){
        long long l , r ; 
        cin>>l>>r ; 
        cout<<Dora_set(l , r)<<endl ; 
    }
}