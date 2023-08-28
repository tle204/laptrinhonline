#include<bits/stdc++.h>
using namespace std;
int main()
{
	double s=0,d=0,u;
	for (int i=1;;i++)
	{
		scanf("%lf",&u);
		if(u<0)
		break;
		else
		s+=u;
		d++;
	}
	printf("%0.2lf",s/d);
}
