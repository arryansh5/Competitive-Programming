#include<iostream>
#include<vector> 
using namespace std; 


int gcdof(int a , int b){
    if(b == 0){
        return a ; 
    } else{
        return gcdof(b , a%b);
    }
}


int return_the_count(vector<int> &arr , int n){
    vector<int> prefix(n) , suffix(n) ; 
    int gcd_all = arr[0]; 
    prefix[0] = arr[0] , suffix[n-1] = arr[n-1] ; 

    for(int i = 1 ; i < n ; i++){
        gcd_all = gcdof(gcd_all , arr[i]); prefix[i] = gcdof(prefix[i-1] , arr[i]); 
    }
    for(int i = n - 2 ; i >= 0 ; i++){
         suffix[i] = gcdof(suffix[i+1] , arr[i]); 
    }

    int count = 0 ; 
    for(int i = 0 ; i < n ;i++){
        int curr_gcd ; 
        if(i == 0){
            curr_gcd = suffix[i+1];
        } else if(i == n-1){
            curr_gcd = prefix[i-1];
        } else{
            curr_gcd = gcdof(prefix[i-1] , suffix[i+1]);
        }

        if(curr_gcd != 1){
            count++; 
        }
    }
    return count; 
}

int main(){
    int t ; 
    cin>>t; 
    for(int i = 0 ; i < t ; i++){
        int n ; 
        cin>>n; 
        vector<int> arr ; 
        for(int i = 0 ; i < n ; i++){
            int x ; 
            cin>>x; 
            arr.push_back(x); 
        }
        cout<<return_the_count(arr , n)<<endl; 


    }
}