#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n,k,kq;
int main()
{
    ll a[1000];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
   ll kq=0;
      for(int i=0;i<n;i++)
         for(int j=i+1;j<n;j++)
      {
         ll t=sqrt((a[i]*a[i])+(a[j]*a[j]));
         double t3=sqrt((a[i]*a[i])+(a[j]*a[j]));
         if(t==t3)
         {
       ll t1=lower_bound(a+j+1,a+n,t)-a;
        ll t2=upper_bound(a+j+1,a+n,t)-a;
        if(a[t1]==t)
        kq+=t2-t1;
         }
      }
      cout<<kq;
}
