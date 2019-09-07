#include<bits/stdc++.h>
using namespace std;

void tree(char *a,char *b,char *c,int a1,int a2,int b1,int b2,int c1,int c2)
{
	if(a1>a2||b1>b2||c1>c2)
		return;
	int i,g;
	for(i=b1; i<=b2; i++)
	{
		if(b[i]==a[a1])
		{
			g=i;
			break;
		}
	}
	c[c2]=b[g];
	if(c2!=c1)
	{
		tree(a,b,c,a1+1,a1+g-b1,b1,g-1,c1,c1+g-b1-1);
		tree(a,b,c,a1+g-b1+1,a2,g+1,b2,c1+g-b1,c2-1);
	}
	return;
}
int main()
{
	char a[63],b[63],c[63];
	int i,n;
	while(1)
	{
		cin>>n;
		if(n==0)
			return 0;
		for(i=0; i<n; i++)
		{
			cin>>a[i];
		}
		for(i=0; i<n; i++)
		{
			cin>>b[i];
		}
		tree(a,b,c,0,n-1,0,n-1,0,n-1);
		for(i=0; i<n; i++)
			cout<<c[i];
		cout<<"\n";
	}
}
