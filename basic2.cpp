#include<bits/stdc++.h>
int main(){
    int i,c[2000],m[2000],l[2000];

int n,d=0,k=0 ;
    scanf("%d",&n);
    for(i=1;i<=n;i++) scanf("%d",&m[i]);
    for(i=1;i<=n;i++) 
    if (m[i]%2) c[++d]=m[i];
    else l[++k]=m[i];
    for(i=1;i<=d;i++) printf("%1d ",c[i]);
    for(i=k;i>0;i--) printf("%1d ",l[i]);
    }
