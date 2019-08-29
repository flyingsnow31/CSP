#include<iostream>
using namespace std;

int main()
{
	long long int r,y,g,n,k,t,time=0,ti=0;
	cin>>r>>y>>g>>n;
	while(n--) {
	cin>>k>>t;
	ti=time%(r+y+g); 
	if(k==0)
	{
		time+=t;
	}
	else if(k==1)
	{
		if(ti<=t)
		time+=(t-ti);
		else if(ti<=(t+g));
		else if(ti<=(t+g+y))
		time+=(r+t+y+g-ti);
		else
		time+=(r+y+g-ti+t);
	}
	else if(k==2)
	{
		if(ti<=t)
		time+=(t-ti+r);
		else if(ti<=(t+r))
		time+=(t+r-ti);
		else if(ti<=(t+r+g));
		else
		time+=(t+r+y+g-ti+r);
	}
	else if(k==3)
	{
		if(ti<=t);
		else if(ti<=(t+y))
		time+=(t+y-ti+r);
		else if(ti<=(t+r+y))
		time+=(t+r+y-ti);
	}
	}
	cout<<time;
}
