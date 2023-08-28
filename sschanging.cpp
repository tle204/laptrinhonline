#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a[]= {500,100,50,10,5,1};
    int n=6;

        long long k,res=0;
        cin>>k;
        long long x=1000-k;
        for(int i=0; i<n; i++) {
            res+=x/a[i];
            x%=a[i];
        }
        cout<<res<<"\n";

    return 0;

}
