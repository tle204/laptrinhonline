#include<bits/stdc++.h>
using namespace std; 

int main(){
    long n  , sum = 0 ,  r , temp; cin >> n ; 
    for(temp =  n ; n !=0 ; n /= 10){
        r =  n%10;
        sum =  sum *10  + r ; 
    }
    if( temp == sum){
        cout << "YES"  << endl;
    }
    else {
        cout << "NO"  << endl;
    }
    return 0;
}
