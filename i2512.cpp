#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,a,b,c;
	cin>>n;
	for (int i=1; i<=n; i++) {
		cin>>a>>b>>c;
		if(c==1) {
			if(a<10&&b<10)
				printf("0%d:0%d - Canh cua mo ra!\n",a,b);
			if(a<10&&b>=10)
				printf("0%d:%d - Canh cua mo ra!\n",a,b);
			if(a>=10&&b<10)
				printf("%d:0%d - Canh cua mo ra!\n",a,b);
			if(a>=10&&b>=10)
				cout<<a<<":"<<b<<" - "<<"Canh cua mo ra!"<<endl;

		}
		if(c==0) {
			if(a<10&&b<10)
				printf("0%d:0%d - Canh cua dong lai!\n",a,b);
			if(a<10&&b>=10)
				printf("0%d:%d - Canh cua dong lai!\n",a,b);
			if(a>=10&&b<10)
				printf("%d:0%d - Canh cua dong lai!\n",a,b);
			if(a>=10&&b>=10)

				cout<<a<<":"<<b<<" - "<<"Canh cua dong lai!"<<endl;

		}
	}
}
