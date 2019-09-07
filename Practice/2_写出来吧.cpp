#include<bits/stdc++.h>
using namespace std;

string hh(int a)
{string ling="ling",yi="yi",er="er",san="san",si="si",wu="wu",liu="liu",qi="qi",ba="ba",jiu="jiu";
	switch(a)
	{
		
		case 0:return ling;
		case 1:return yi;
		case 2:return er;
		case 3:return san;
		case 4:return si;
		case 5:return wu;
		case 6:return liu;
		case 7:return qi;
		case 8:return ba;
		case 9:return jiu;
	}
}
int main()
{
	string b;
	int a,i=0,ans=0;
	cin>>b;
	for(i=0;i<b.length();i++)
	{
		ans+=b[i]-'0';
	}
	if(ans>99)
	{
		a=ans/100;
		cout<<hh(a)<<" ";
		a=(ans-a*100)/10;
		cout<<hh(a)<<" ";
		a=ans%10;
		cout<<hh(a);
		
	}
	else if(ans>9)
	{
		a=ans/10;
		cout<<hh(a)<<" ";
		a=ans%10;
		cout<<hh(a);
	}
	else
	{
		cout<<hh(ans);
	}
}

