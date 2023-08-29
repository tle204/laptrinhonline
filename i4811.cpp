#include <stdio.h>
int main(){
    char a;
    scanf ("%c",&a);int b[12][12];float tong=0;
    for (int i=0;i<12;i++) for (int j=0;j<12;j++) scanf ("%d",&b[i][j]);
    for (int i=0;i<12;i++) for (int j=0;j<i;j++) tong+=b[i][j];
    switch (a){
        case 'S': printf ("%.1f",tong);break;
        case 'M': printf ("%.1f",tong/66.0);
    }
}
