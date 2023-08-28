#include <bits/stdc++.h>
#define pt(a,b,c) (100.00*(a)/(a+b+c))
using namespace std;
enum dv{C,R,S};
istream&operator>>(istream &is,dv &b){
    string na;
    is>>na;
    for(char &c:na)
        c=toupper(c);
    if(na=="C")
        b=C;
    else if(na=="R")
        b=R;
    else
        b=S;
    return is;
}
class hehe{
    int sl;
    dv t;
    public:
    int getsl(){
        return sl;
    }
    dv gett(){
        return t;
    }
    void nhap(){
        cin >> sl >> t;
    }
};

int main(){
    int n;
    cin >> n;
    hehe *a;
    a=new hehe[n+1];
    for(int i=0;i<n;i++){
        a[i].nhap();
    }
    int tho=0,chuot=0,ech=0;
    for(int i=0;i<n;i++){
        if(a[i].gett()==C){
            tho+=a[i].getsl();
        }
        if(a[i].gett()==R){
            chuot+=a[i].getsl();
        }
        if(a[i].gett()==S){
            ech+=a[i].getsl();
        }
    }
    cout << "Tong so: "<<tho+chuot+ech<<endl;
    cout << "Tong so tho: " << tho <<endl;
    cout << "Tong so chuot: " <<chuot<< endl;
    cout << "Tong so ech: " <<ech<< endl;
    cout << "Ty le phan tram cua tho: " <<setprecision(2)<<fixed << pt(tho,chuot,ech) <<"%"<< endl;
    cout << "Ty le phan tram cua chuot: " <<setprecision(2)<<fixed << pt(chuot,tho,ech) <<"%"<< endl;
    cout << "Ty le phan tram cua ech: " <<setprecision(2)<<fixed << pt(ech,chuot,tho) <<"%";
}
