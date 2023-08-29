#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int x[n+5]={0};
        map<int,int>M;
        for(int i=1;i<=n;i++) {scanf("%d",&x[i]);x[i]+=x[i-1];M[x[i]]++;}
        for(int i=1;i<=n;i++) {M[x[i]+x[n]]++;}
        if(x[n]%3) printf("0\n");
        else
        {
            int d=x[n]/3;
            long long res=0;
            for(int i=0;x[i]<d;i++) if(M.find(x[i]+d)!=M.end()&&M.find(x[i]+2*d)!=M.end()) res++;
            printf("%lld\n",res);
        }
    }

}
