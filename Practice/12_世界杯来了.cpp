#include<bits/stdc++.h>
using namespace std;

struct guojia
{
	string name;
	int sc,goal,lost;
	guojia():sc(0),goal(0),lost(0){};
}gj[51];
bool cmp(guojia a,guojia b)
{
	int aa=a.goal-a.lost,bb=b.goal-b.lost;
	if(a.sc!=b.sc)
	return a.sc>b.sc;
	else if(aa!=bb)
	return aa>bb;
	else
	return a.goal>b.goal;
}
bool cmp1(guojia a,guojia b)
{
	return a.name<b.name;
}
int main()
{
	string name,name1,name2;
	int n,i,j,a,b,m;
	char z;
	cin>>n;
for(i=0;i<n;i++)
{
	cin>>name;
	gj[i].name=name;
}
m=n*(n-1)/2;
while(m--)
{
	cin>>name;
	for(i=0;i<name.length();i++)
	{
		if(name[i]=='-')
		{j=i;break;}
	}
	name1=name.substr(0,j);
	name2=name.substr(j+1,name.length()-j);
	cin>>a>>z>>b;
	if(a>b){
	for(i=0;i<n;i++)
	{
		if(gj[i].name==name1)
		{
			gj[i].sc+=3;
			gj[i].goal+=a;
			gj[i].lost+=b;
		}
		if(gj[i].name==name2)
		{
			gj[i].goal+=b;
			gj[i].lost+=a;
		}
	}}
	else if(a<b)
	{
		for(i=0;i<n;i++)
	{
		if(gj[i].name==name1)
		{
			
			gj[i].goal+=a;
			gj[i].lost+=b;
		}
		if(gj[i].name==name2)
		{
			gj[i].sc+=3;
			gj[i].goal+=b;
			gj[i].lost+=a;
		}
	}
	}
	else
	{
		for(i=0;i<n;i++)
	{
		if(gj[i].name==name1)
		{
			gj[i].sc+=1;
			gj[i].goal+=a;
			gj[i].lost+=b;
		}
		if(gj[i].name==name2)
		{
			gj[i].sc+=1;
			gj[i].goal+=b;
			gj[i].lost+=a;
		}
	}
	}
}
sort(gj,gj+n,cmp);
sort(gj,gj+n/2,cmp1);
for(i=0;i<n/2;i++)
{
	cout<<gj[i].name<<endl;
}
} 
