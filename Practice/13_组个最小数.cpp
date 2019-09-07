#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b)
{
	return a<b;
}
int main()
{
	int a[50],i=0,n,j=0;
	string b;
	getline(cin,b);
	for(i=0;i<b.length();i=i+2)
	{
		a[j]=b[i]-'0';
		j++;
	}
	n=j;
	sort(a,a+n,cmp);
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			j=i;
			break;
		}
	}
	long long int ans=0;
	ans+=a[i]*pow(10,n-1);
	for(i=0;i<n;i++)
	{
		if(i!=j)
		{
			ans+=a[i]*pow(10,n-1-i);
		}
	}
	cout<<ans;
}
