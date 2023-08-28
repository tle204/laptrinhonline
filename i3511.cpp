#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,s=1;
    cin>>n;
    for(int i=n;i>0;i--)
    s*=i;
    cout<<s;
}
