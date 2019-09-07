#include<iostream>
using namespace std;

int main()
{
	int tem,n,p1,p2,p3,t1,t2,l[101],r[101],i,ans=0;
	cin>>n>>p1>>p2>>p3>>t1>>t2;
	for(i=0;i<n;i++)
	{
		cin>>l[i]>>r[i+1];
	}
	p2=p1-p2;
	p3=p1-p3;
	ans=(r[n]-l[0])*p1;
	for(i=1;i<n;i++)
	{
		tem=l[i]-r[i];
		if(tem>=t2+t1)
		{
			ans=ans-(tem-t2-t1)*p3-t2*p2;
		}
		else if(tem>t1)
		{
			ans=ans-(tem-t1)*p2;
		}
	}
	cout<<ans;
}
