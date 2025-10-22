#include<bits/stdc++.h>
using namespace std; 
//https://codeforces.com/problemset/problem/136/A
int main(){
    int n ; 
    cin>>n ;
    vector<int> arr ;
    vector<int> arr2(n ,0);
    for(int i = 0 ; i < n ; i++){
        int x; 
        cin>>x; 
        arr.push_back(x); 
    }

    for(int i = 1 ; i <= n ;i++){
        arr2[arr[i-1] - 1] = i ; 
    }
    
    for(int j = 0 ; j < n ;j++){
        cout<<arr2[j]<<" "; 

    }
}
