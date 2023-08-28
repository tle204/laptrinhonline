#include<bits/stdc++.h>

int main()
{
    long int x,y,s=0;
    scanf("%ld%ld",&x,&y);
    if(x<y)
    {
	{
    	for (int i=x;i<=y;i++)
    	if (i%13!=0)
    	s+=i;
	}
	printf("%ld",s);}
    if(x>y)
{
		{ 
	    for (int i=y;i<=x;i++)
    	if (i%13!=0)
    	s+=i;
	}
	printf("%ld",s);}
	
}
