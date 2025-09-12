#include <iostream>
using namespace std;

// Check primality for small numbers
bool isPrime(int n){
    if(n <= 1) return false;
    if(n <= 3) return true;
    if(n % 2 == 0) return false;
    for(int i = 3; i*i <= n; i += 2)
        if(n % i == 0) return false;
    return true;
}

bool checkPrime(int x, int k){
    if(k == 1) return isPrime(x);
    if(x == 1 && k == 2) return true; // 11 is prime
    return false;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, k;
        cin >> x >> k;
        cout << (checkPrime(x, k) ? "YES" : "NO") << endl;
    }
}
