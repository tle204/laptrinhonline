#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  float x,y,tong=0;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
  	cin>>x>>y;
  	if(x==1001) tong+=1.5*y;
  	if(x==1002) tong+=2.5*y;
  	if(x==1003) tong+=3.5*y;
  	if(x==1004) tong+=4.5*y;
  	if(x==1005) tong+=5.5*y;
   } printf("%0.2lf",tong);
}
