#include <bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    double x,y;
    cin>>x>>y;
    if(x==0&&y==0) cout<<"Origem";
    else if(x==0&&y!=0) cout<<"Eixo Y";
    else if(x!=0&&y==0) cout<<"Eixo X";
    else
    {
        if(x>0&&y>0) cout<<"Q1";
        else if(x>0&&y<0) cout<<"Q4";
        else if(x<0&&y>0) cout<<"Q2";
        else cout<<"Q3";
    }

}
