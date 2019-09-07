#include<bits/stdc++.h>
using namespace std;
typedef long long int LL ;
struct shudui
{
	LL c,x;
}a[1000];
bool cmp(shudui a,shudui b)
{
	return a.c>b.c;
}
int main()
{
	int x,y,i=0,n1=0,flag=0;
	while(1)
	{
		cin>>x>>y;
		if(x==y&&x==0&&flag==1)
		break;
		if(x==y&&x==0&&flag==0)
		flag=1;
		else
		{
			for(i=0;i<n1;i++)
			{
				if(x==a[i].c)
				{a[i].x+=y;goto loop1;}
			}
					a[n1].c=x;
					a[n1].x=y;
					n1++;
					loop1:;
		}
	}
	sort(a,a+n1,cmp);
	for(i=0;i<n1;i++)
	{if(a[i].x!=0) 
		cout<<a[i].c<<" "<<a[i].x<<endl;
	}
}
