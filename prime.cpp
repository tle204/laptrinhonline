#include<stdio.h>
#include<math.h>
int main(){
    long long n;
    int i;
    scanf("%lld",&n);
    if (n<2){
        printf("NO");
        return 0;
    }
    if(n>=2);{
        int uoc = 0;
        for(i = 2; i <= sqrt(n); i++) if(n % i == 0) uoc++;
        if(uoc == 0) printf("YES");
        else printf("NO");
    }
}
