#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    map<double,string> D;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        string s;
        double x;
        cin>>s>>x;
        if(x>=8) D[x]=s;
    }
    if(D.size()) cout<<D.rbegin()->second;
    else cout<<"Diem toi thieu khong dat";
}
