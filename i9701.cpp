#include<bits/stdc++.h>
using namespace std;
void tb(int n)
{    
double a,b,c;
	for (int i=1;i<=n;i++)
	{
	cin>>a>>b>>c;
printf("%0.1lf\n",(a*2+b*3+c*5)/10);
}
}
int main()
{
    int n;
    cin>>n;
    tb(n);
}
