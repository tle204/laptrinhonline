#include <bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int a,dem[100],n,max=0;
cin >> n;
for (int i = 0; i < n; i++)
{
    cin >> a;
    dem[a]++;
    if(dem[a]>max) max=dem[a];
}
for (int i = 99; i >=0; i--)
{
     if(dem[i]==max){
         	cout<<i;
         	return 0;
}
}
}
