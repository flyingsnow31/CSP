#include<iostream>
using namespace std;

int main()
{
	int r,y,g,n,k,t,time=0;
	cin>>r>>y>>g>>n;
	while(n--)
	{
		cin>>k>>t;
		if(k==0||k==1)
		time+=t;
		else if(k==2)
		{
			time+=(t+r);
		}
	}
	cout<<time;
 } 
