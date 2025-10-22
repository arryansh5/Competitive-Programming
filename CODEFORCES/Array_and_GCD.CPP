#include<iostream>
#include <cmath>
#include<vector>
#include <algorithm>
#include <cstdlib>
using namespace std; 




// helper function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// main function: returns the sum of first n prime arr
int sumOfPrimes(int n) {
    int count = 0, candidate = 2;
    int sum = 0;

    while (count < n) {
        if (isPrime(candidate)) {
            sum += candidate;
            count++;
        }
        candidate++;
    }

    return sum;
}


int sum_of_array(vector<int> &arr , int n ){
    int sum = 0 ; 
    for(int i = 0 ; i < n ; i++){
        sum += arr[i] ; 
    }
    
    return sum ; 
}


int return_the_removal_count(vector<int> &arr , int n){
    int count = 0 ; 
    int ans = 0 ; 
    int sum_of_array1 = sum_of_array(arr , n) , sumofprime1 = sumOfPrimes(n); 
    int diff = sum_of_array1 - sumofprime1 ; 
  
    if(diff >= 0){
        return 0 ; 
    }
    sort(arr.begin(), arr.end()) ; 
    int diff1 = abs(diff); 
    // int count = 1 ; 
    int i = arr.size() - 1 ; 
    while(diff < 0){
        count++; 
        if(arr[i] - diff1 < 0){
            // cout<<"Hello "; 
            
            diff1 = arr[i] - diff1; 
            i-- ; 
        } else {
            ans =  count ;
            i--;
            break ; 
        }
    }
    return ans ; 
    
}






int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr;
        for (int i = 0; i < n; i++) {
            int x ; 
            cin>>x;
            arr.push_back(x) ; 
        }
        cout << return_the_removal_count(arr, n) << '\n';
    }
    return 0;
}