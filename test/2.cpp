#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int i,n,j=0,o=0;
	long long int a[10000];
	cin>>n;
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	if(a[i]&1)
	{
		j++;
	}
	else
	{
		o++;
	}
	}
	if(j>0&&o>0)
	{
		sort(a,a+n);
	}
/*	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(((a[i]+a[j])&1)&&a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}*/
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
}
