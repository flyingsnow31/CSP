#include<bits/stdc++.h>
using namespace std;

int day(string a)
{
		if(a=="monday")return 1;
		else if(a=="tuesday")return 2;
		else if(a=="wednesday")return 3;
		else if(a=="thursday")return 4;
		else if(a=="friday")return 5;
		else if(a=="saturday")return 6;
		else if(a=="sunday")return 7;
}
int main()
{
	string s,e; 
	int flag;
	int t,l,r,m,a,b,i,tem;
	cin>>t;
	while(t--)
	{
		flag=0;
		cin>>s>>e>>a>>b;
		m=day(e)-day(s)+1;
		if(m<0)
		m+=7;
		tem=m;
		for(i=0;i<15;i++)
		{
			tem=m+7*i;
			if(tem<=b&&tem>=a)
			flag++;
		}
		if(flag==0)
		cout<<"impossible\n";
		else if(flag==1)
		cout<<a<<"\n";
		else 
		cout<<"many\n";
	}
 } 
