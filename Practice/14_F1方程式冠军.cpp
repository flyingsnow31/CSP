#include<bits/stdc++.h>
using namespace std;

int p[11]={0,25,18,15,12,10,8,6,4,2,1};
struct cheshou
{
	string name;
	int pw[110];
	int sc;
	cheshou():pw({0}),sc(0){};
}cs[200];
bool cmp1(cheshou a,cheshou b)
{
	if(a.sc!=b.sc)
	return a.sc>b.sc;
	for(int i=1;i<=100;i++)
	{
		if(a.pw[i]!=b.pw[i])
	return a.pw[i]>b.pw[i];
	 } 
}
bool cmp2(cheshou a,cheshou b)
{
 	if(a.pw[1]!=b.pw[1])
	return a.pw[1]>b.pw[1];
	else if(a.sc!=b.sc)
	return a.sc>b.sc;
	for(int i=2;i<=100;i++)
	{
		if(a.pw[i]!=b.pw[i])
	return a.pw[i]>b.pw[i];
	 } 
}
int main()
{
	string name;
	bool flag=0;
	int j,t,n,i,num=0;cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=1;i<=n;i++)
		{
			flag=0;
			cin>>name;

			
			for(j=0;j<num;j++)
			{
				if(name==cs[j].name)
				{
					cs[j].pw[i]++;
					cs[j].sc+=p[i];
					flag=1; 
				}
			}
			if(!flag)
			{
				cs[j].name=name;
				num++;
				cs[j].pw[i]=1;
				cs[j].sc=p[i];
			}
		}
	}
	sort(cs,cs+num,cmp1);
	cout<<cs[0].name<<endl;
	sort(cs,cs+num,cmp2);
	cout<<cs[0].name;
}
