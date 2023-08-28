#include <bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
string a,b,c;
cin >> a >> b >> c;
if(a=="vertebrado"){
    if(b=="ave"){
        if(c=="carnivoro") cout << "aguia" ;
        else cout << "pomba";
    }else{
        if(c=="onivoro") cout << "homem";
        else cout << "vaca";
    }
}
if(a=="invertebrado"){
    if(b=="inseto"){
        if(c=="hematofago") cout << "pulga";
        else cout << "lagarta";
    }else{
        if(c=="hematofago") cout << "sanguessuga";
        else cout << "minhoca";
    }
}
return 0;
}
