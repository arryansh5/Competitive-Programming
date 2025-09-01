#include <iostream>
#include<cmath>
#include<algorithm>


using namespace std;
using ll = long long int ; 

string Existence(ll x , ll y){
    ll res = pow(x , 4) , res2 = pow(y , 2) , res3 = pow(x , 2) ; 
    ll total = (res + (4*res2)) , total2 = (4*res3*y) ; 

    cout<<"Total 2 : "<<total2<<endl ; 
    if(total2 == total){
        return "Yes"; 
    } else {
        return "No"; 
    }
}


int main() {
	// your code goes here
    int t ; 
    cin>>t; 
    for(int i = 0; i < t ; i++){
        ll x ;
        ll y; 
        cin>>x>>y; 
        cout<<Existence(x , y)<<endl;  
    }
    return 0 ; 
}
