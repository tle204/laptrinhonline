#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[47], n;
    a[0] = 0;
    a[1] = 1;
    cin >> n;
    for ( int i = 2; i < n; i++){
        a[i] = a[i-1]+a[i-2];
    }
    for ( int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
