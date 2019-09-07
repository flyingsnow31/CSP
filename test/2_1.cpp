#include<bits/stdc++.h>
using namespace std;

struct st
{
	int sc,num;
} s[1000000];
bool cmp(st a,st b)
{
	if(a.sc!=b.sc)
		return a.sc>b.sc;
	else
		return a.num<b.num;
}
int main()
{
	int n,m,i;
	int q,w,e,r;
	cin>>n>>m;
	for(i=0; i<n; i++)
	{
		cin>>q>>w>>e>>r;
		s[i].sc=q+w+e+r;
		s[i].num=i+1;
	}
	sort(s,s+n,cmp);
	for(i=0; i<n; i++)
	{
		if(m==s[i].num)
		{
			cout<<i+1;
			break;
		}
	}
	return 0;
}
