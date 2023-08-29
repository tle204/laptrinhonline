#include<string.h>
#include<stdio.h>
int n,m,i;
char s[100];
int main()
{
	char s1[]="fechou";
	scanf("%d %d",&n,&m);
	for( i=1;i<=m;i++)
	{
		scanf("%s",s);
		if(strstr(s1,s)!=NULL)
		{
			n++;
		}
		else
		    n--;
	}
	printf("%d",n);
}
