#include<bits/stdc++.h>
using namespace std;

int main()
{
	int max=-1,min=101,i,n,sc;
	string smax,smaxx,smin,sminx,a,b;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a>>b>>sc;
		if(sc>max)
		{
			smax=a;
			smaxx=b;
			max=sc;
		}
		if(sc<min)
		{
			smin=a;
			sminx=b;
			min=sc;
		}
	}
	cout<<smax<<" "<<smaxx<<endl<<smin<<" "<<sminx;
}
