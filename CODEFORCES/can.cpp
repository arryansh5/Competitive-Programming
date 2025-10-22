#include<bits/stdc++.h>
using namespace std; 

int can(long long n ){
    vector<long long> arr ; 
    while(n > 0){
        arr.push_back(n%10); 
        n /= 10; 
    }

    reverse(arr.begin() , arr.end()); 

    for(int i = 0 ; i < arr.size() ; i++){
        if(i ==0 && arr[i] == 9) continue;
        arr[i] = min(arr[i],9-arr[i]);
    }

    long long results = 0 ; 
    for(int d : arr){
        results = results * 10 + d ; 
    }

    return results; 
}

int main(){
    long long n ; 
    cin>>n; 
    cout<<can(n);
}