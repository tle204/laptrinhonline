#include<bits/stdc++.h>
using namespace std;
int main(){
	double tonga=0,tongb=0,tongc=0,trunga=0,trungb=0,trungc=0;
	int t; cin >> t;
	while(t--){
		int a,b,c,d,e,f;
		string s; cin >> s;
		cin >> a >> b >> c;
		cin >> d >> e >> f;
		tonga+= a;
		tongb+= b;
		tongc+= c;
		trunga+=d;
		trungb+=e;
		trungc+=f;
	}
	double ser,bl,sp,ser1,bl1,sp1;
	ser1= trunga/tonga*100;
	bl1 = trungb/tongb*100;
	sp1= trungc/tongc*100;
	ser = round(ser1*100)/100;
	bl = round(bl1*100)/100;
	sp =round(sp1*100)/100;
	
	string a1= to_string(ser);
	string a2= to_string(bl);
	string a3=to_string(sp);
	for (int i = 0; i < a1.size(); i++)
	{
		if(a1[i]=='.'){
			a1[i]=',';
			break;
		}
	}
	for (int i = 0; i < a2.size(); i++)
	{
		if(a2[i]=='.'){
			a2[i]=',';
			break;
		}
	}
	for (int i = 0; i < a1.size(); i++)
	{
		if(a3[i]=='.'){
			a3[i]=',';
			break;
		}
	}
	cout << "Service: "<< setprecision(2) << a1.substr(0,5) <<"%." << endl;
	cout << "Block: " <<setprecision(2) << a2.substr(0,5) <<"%." << endl;
	cout <<"Spike: "<<setprecision(2) << a3.substr(0,5) <<"%." << endl;
}
