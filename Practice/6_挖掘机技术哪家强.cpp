#include<bits/stdc++.h>
using namespace std;


int main()
{
	map<int,int>m;
	int n;
	cin>>n;
	int a;
	int b;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		m[a]+=b;
	}
	a=0;
	map<int,int>::iterator t;
	for(t=m.begin();t!=m.end();t++)
	{
		if(t->second>a)
		{b=t->first;
		a=t->second;
		}
	}
	cout<<b<<" "<<a;
 } 
