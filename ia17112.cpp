#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
map<int,int>M;
int n;
cin>>n;

for(int i=0;i<n;i++){
    int x;
    cin>>x;
    M[x]++;
}
for(auto p:M){
    cout<<p.first<<" xuat hien "<<p.second<<" lan"<<endl;
}
return 0;
}
