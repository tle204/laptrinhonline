#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	scanf("%d",&n);
	for (int i=n;i>=1;i--)
	{
		if(n%i==0)
		printf("%d\n",n/i);
	}
}
