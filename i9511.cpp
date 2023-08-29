#include <bits/stdc++.h>

using namespace std;

int main(){

    for(int i=0;;i++){
        int X,s=0;
        cin>>X;
        if(X==0) break;
        else{
            for(int i=X;i<=X+9;i++){
                if(i%2==0)
                s+=i;
            }
            cout<<s<<"\n";
        }
    }

}
