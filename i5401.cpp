#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a[4];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3,greater<float>());
    if(a[0]>=(a[1]+a[2]))
    {
        cout<<"KHONG PHAI TAM GIAC"<<endl;
        exit(0);
    }
    if(a[0]*a[0]==a[1]*a[1]+a[2]*a[2])
        cout<<"TAM GIAC VUONG"<<endl;
    if(a[0]*a[0]>a[1]*a[1]+a[2]*a[2])
        cout<<"TAM GIAC TU"<<endl;
    if(a[0]*a[0]<a[1]*a[1]+a[2]*a[2])
        cout<<"TAM GIAC NHON"<<endl;
    if(a[0]==a[1]&&a[1]==a[2])
        cout<<"TAM GIAC DEU"<<endl;
    if((a[0]==a[1]&&a[1]!=a[2])||(a[0]==a[2]&&a[2]!=a[1])||(a[1]==a[2]&&a[0]!=a[1]))
        cout<<"TAM GIAC CAN"<<endl;
}
