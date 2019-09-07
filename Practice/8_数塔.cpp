#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,j,i,a[100][100],b[100],c[100][100];
	cin>>n;
	for(i=0;i<n;i++)
	for(j=0;j<=i;j++)
	{
	cin>>a[i][j];
	c[i][j]=a[i][j];
	}
	b[0]=a[0][0];
	for(i=n-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(a[i][j]>a[i][j+1])
			{
				a[i-1][j]+=a[i][j];
			}
			else
			{
				a[i-1][j]+=a[i][j+1];
			}
		}
	}
	cout<<a[0][0]<<endl;
	cout<<c[0][0];
	int k=0;
	for(int i=0;i<n-1;i++)
	{
		int j=k;
		if(a[i][j]-a[i+1][j]==c[i][j])
		{
			cout<<" "<<c[i+1][j];
			k=j;
		}
		else
		{
			cout<<" "<<c[i+1][j+1];
			k=j+1;
		}
	}
}
