#include<iostream>
#include<algorithm>
using namespace std;

struct ti
{
	int l,r;
}h[2000];
int main()
{
	int i,n,ans=0,j=0,l,r,a[4],t=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>h[i].l>>h[i].r;
	}
	for(i=0;i<n;i++)
	{
		cin>>l>>r;
		for(j=0;j<n;j++)
		{
			if(r>h[j].l&&l<h[j].r)
			{
				a[0]=r;
				a[1]=l;
				a[2]=h[j].l;
				a[3]=h[j].r;
				sort(a,a+4);
				ans+=(a[2]-a[1]);
			}
		}
	}
	cout<<ans;
}
