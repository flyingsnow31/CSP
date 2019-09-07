#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,ans=0,k,i,j,t;
	char a[2000][2000];
	cin>>n;
	cin>>m>>k; 
	for(i=0;i<n;i++)
	{
		t=0;
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
			if(a[i][j]=='.')
			{
				t++;
				if(t>=k)
				ans++;
			}
			else
			{
				t=0;
			}
		}
	}
	for(j=0;j<m;j++)
	{
		t=0;
		for(i=0;i<n;i++)
		{
			if(a[i][j]=='.')
			{
				t++;
				if(t>=k)
				ans++;
			}
			else
			{
				t=0;
			}
		}
	}
	cout<<ans;
}
