#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,i;
    scanf("%d%d",&x,&y);
    if(x>y) swap(x,y);
    for(i=x+1;i<y;i++)
    {
        if(i%5==2 or i%5==3) printf("%d\n",i);
        else continue;
    } 
}
