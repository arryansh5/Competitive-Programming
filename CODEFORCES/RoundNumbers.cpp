#include <bits/stdc++.h>
using namespace std;

vector<long long> RoundNumbers(long long n) {
    vector<long long> round_num;
    int place = 1 ; 
    while(n > 0){
        long long  digit = n % 10; 
        if(digit != 0) round_num.push_back(digit*place); 
        n /= 10 ; 
        place *= 10 ; 
    }
    reverse(round_num.begin() , round_num.end()); 
    return round_num; 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> arr = RoundNumbers(n);
        cout << arr.size() << endl;
        for (long long x : arr) cout << x << " ";
        cout << endl;
    }
}
