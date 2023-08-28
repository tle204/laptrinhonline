#include<bits/stdc++.h>
using namespace std;
int main(){
	float x1[1000],y1[1000],x2[1000],y2[1000],s1[1000],s2[1000],s[1000];
	for(int i=1;i<=3;i++){
		cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
		s1[i]=abs(x2[i]-x1[i]);
		s2[i]=abs(y2[i]-y1[i]);
		s[i]=(s2[i]+s1[i])*2;
		}
		float max=0;
		for(int i=1;i<=3;i++){
			if(s[i]>max)
			max=s[i];
		}
	cout<< fixed << setprecision(2)<<max<<"\n";
}
