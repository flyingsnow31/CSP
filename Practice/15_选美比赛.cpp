#include<bits/stdc++.h>
using namespace std;

struct XS
{
	int sc,num,score;
	XS():sc(0),num(0),score(0){};
}xs[105];
bool cmp1(XS a,XS b)
{
	return a.sc>b.sc;
}
bool cmp(XS a,XS b)
{
	return a.num<b.num;
}
int main()
{int n,i,m;
cin>>n;
m=n;
	for(i=1;i<=n;i++)
	{
		cin>>xs[i].sc;
		xs[i].num=i;
	}
	sort(xs+1,xs+n+1,cmp1);
	n++;
	i=1;
	int j=0;
	while(n--)
	{j++;
		xs[j].score=i;
		
	if(xs[j].sc==xs[j-1].sc)
	{
	
		xs[j].score--;
		i--;
	}i++;}
	sort(xs+1,xs+m+1,cmp);
	for(i=1;i<=m;i++)
{
	cout<<xs[i].score<<" ";
}
}

