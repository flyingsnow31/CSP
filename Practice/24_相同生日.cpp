#include<bits/stdc++.h>
using namespace std;

struct shenri
{
	string xh;
	int s,y,r,num;
}sr[200];
bool cmp(shenri a,shenri b)
{
	if(a.s!=b.s)
	return a.s<b.s;
	else
	return a.num<b.num;
}
int main()
{
	bool flag;
	int a,b,n,i,num=0,j;
	string s;
	cin>>n;
	cin>>s>>a>>b;
	sr[0].xh=s;
	sr[0].s=a*100+b;
	sr[0].y=a;
	sr[0].r=b;
	sr[0].num=0;
	num++;
	for(i=1;i<n;i++)
	{
		flag=1;
		cin>>s>>a>>b;
		for(j=0;j<num;j++)
		{
			if(a*100+b==sr[j].s)
			{
				sr[j].xh=sr[j].xh+' '+s;
				flag=0;
				break;
			}
		 } 
		 if(flag)
		 {
		 	sr[num].xh=s;
			sr[num].s=a*100+b;
			sr[num].y=a;
			sr[num].r=b;
			sr[num].num=0;
			num++;
		 }
	}
	sort(sr,sr+num,cmp);
	for(i=0;i<num;i++)
	{
		cout<<sr[i].y<<" "<<sr[i].r<<" "<<sr[i].xh<<endl;
	}
}
/* 90
struct shenri
{
	string xh;
	int s,y,r,num;
}sr[200];
bool cmp(shenri a,shenri b)
{
	if(a.s!=b.s)
	return a.s<b.s;
	else
	return a.num<b.num;
}
int main()
{
	int a,b,n,i;
	string s;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>sr[i].xh>>a>>b;
		sr[i].s=a*1000+b;
		sr[i].y=a;
		sr[i].r=b;
		sr[i].num=i;
	}
	sort(sr,sr+n,cmp);
	cout<<sr[0].y<<" "<<sr[0].r<<" "<<sr[0].xh;
	for(i=1;i<n;i++)
	{
		if(sr[i].s==sr[i-1].s)
		cout<<" "<<sr[i].xh;
		else
		{
			cout<<endl<<sr[i].y<<" "<<sr[i].r<<" "<<sr[i].xh;
		}
	}
}*/
