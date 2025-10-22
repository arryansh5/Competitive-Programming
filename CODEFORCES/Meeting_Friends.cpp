#include<bits/stdc++.h>
using namespace std; 
//https://codeforces.com/problemset/problem/723/A
int main(){
    int x1 , x2 , x3; 
    cin>>x1>>x2>>x3; 
    int m = (x1+ x2 + x3) - max(max(x1 , x2),x3) -  min(min(x1 , x3),x2);
    int total_distance = abs(x1 - m) + abs(x2 - m) + abs(x3 - m); 
    cout<<total_distance<<endl; 
}