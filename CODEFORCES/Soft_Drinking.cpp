#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/151/A;
int main(){
    int n, k, l, c, d, p, nl, np ; 
    cin>>n>>k>>l>>c>>d>>p>>nl>>np; 
    int drinks = (k*l) / nl ; 
    int salt = p / np ; 
    int slice = c*d ; 
    int output = min(min(drinks , slice) , salt) / n ; 
    cout<<output<<endl; 
}