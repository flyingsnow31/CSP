#include<bits/stdc++.h>
using namespace std;
/*
int main()
{
	int less=0;
	string st1,st2;
	cin>>st1>>st2;
	int len1=st1.length();
	int len2=st2.length(),i,t;
	for(i=0;i<len2;i++)
	{
		t=st1.find(st2[i],0);
		if(t!=-1)
		{
			st1.erase(st1.begin()+t);
		}
		else
		{
			less++;
		}
	}
	if(less>0)
{
	cout<<"NO "<<less;
}
else
{
	cout<<"Yes "<<len1-len2;
}
}

*/



int main()
{
	int less=0;
	bool flag=true;
	map<char,int>m;
	string dj,xh;
	cin>>dj;
	int i,num=dj.length(),n;
	cin>>xh;
	n=xh.length();
	for(i=0;i<num;i++)
	{
		m[dj[i]]+=1;
	}
	map<char,int>::iterator it;
	for(i=0;i<n;i++)
	{
		flag=false;
	for(it = m.begin(); it!=m.end(); it++)
	{
		if(xh[i]==it->first)
		{
			if(it->second>0)
			{
			it->second--;
			flag=true;
			num--;
			break;
			}
		}
	}
	if(flag==false)
	{
		less++;
	}
}
if(less>0)
{
	cout<<"No "<<less;
}
else
{
	cout<<"Yes "<<num;
}
}
