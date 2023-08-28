#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int min=a<b&a<c?a:(b<c?b:c);
    int max=a>b&a>c?a:(b>c?b:c);
    cout<<min<<"\n"<<a+b+c-max-min<<"\n"<<max<<"\n";
    cout<<a<<"\n"<<b<<"\n"<<c;
}
