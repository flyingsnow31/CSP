#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,max=-1,min=-1,a[10000],ans=0,tem,aaa=0;
	cin>>n;
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	min=a[0];
	max=a[n-1];
	ans=max+min;
	for(i=1; i<n; i++)
	{
		tem=abs(max+min-2*a[i]);
		if(tem<ans)
		{
			ans=tem;
			aaa=a[i];
		}
	}
	cout<<aaa;
}
