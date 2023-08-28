#include <stdio.h>
int cong(int a,int b){
    return a+b;
}
int main(){
    int a;
    scanf ("%d",&a);
    int b[a],c[a];
    for (int i=0;i<a;i++) scanf ("%d",&b[i]);
    for (int i=0;i<a;i++) scanf ("%d",&c[i]);
    for (int i=0;i<a;i++) printf("%d\n",cong(b[i],c[i]));
}
