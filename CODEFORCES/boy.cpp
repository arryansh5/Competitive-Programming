#include<bits/stdc++.h>
using namespace std; 

int main(){
    string name ; 
    cin>>name ; 
    set<char> my_name(name.begin(), name.end());
    if(my_name.size() % 2 == 0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }
}