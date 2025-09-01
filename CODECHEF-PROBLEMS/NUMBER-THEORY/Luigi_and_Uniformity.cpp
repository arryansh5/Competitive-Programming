#include <bits/stdc++.h>
using namespace std;

int Luigi_and_Uniformity(vector<int> &arr , int n ){
    int g = arr[0]; 
    for(int i = 0 ; i < n;  i++){
       g = __gcd(g , arr[i]); 
    } 
    // int count = 0 ; 
    // for(int i = 0 ; i < n; i++){
    //     if(arr[i] % g == 0){
    //         count++ ; 
    //     }
    // } 

    if(3 % 1 == 0) return "True" ; 
    else return "false" ; 
}


int main() {
	// your code goes here
    int t ; 
    cin>>t ; 
    for(int i =0 ; i < t ; i++){
        int n ; 
        vector<int> arr; 
        cin>>n; 
        for(int i = 0 ; i < n ; i++){
            int x ; 
            cin>>x; 
            arr.push_back(x); 
        }
        
        cout<<Luigi_and_Uniformity(arr , n)<<endl; 
    }
}
