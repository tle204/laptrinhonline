#include <stdio.h>
int main(){
    int n,m,step=1;
    scanf ("%d",&n);
    int t=n;
    while (m<n){
        scanf ("%d",&m);
    }
    for (int i=n+1;;i++){
        t+=i;
        step++;
        if (t>m) break;
        
    }
    printf ("%d",step);
    
}
