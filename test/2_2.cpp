#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> b;
	int i,t,n;
	unsigned int j;
	bool f;
	cin>>n;
	for(i=0; i<n; i++)
	{
		f=false;
		cin>>t;
		for(j=0; j<b.size(); j++)
		{
			if(t==b[j])
			{
				f=true;
				break;
			}
		}
		if(!f)
		{
			b.push_back(t);
			if(b.size()>3)
			{
				cout<<-1;
				return 0;
			}
		}
	}
	if(b.size()==1)
	{
		cout<<0;
		return 0;
	}
	else if(b.size()==2)
	{
		cout<<abs(b[1]-b[0]);
	}
	else if(b.size()==3)
	{
		sort(b.begin(),b.end());
		if(b[1]-b[0]==b[2]-b[1])
		{
			cout<<b[1]-b[0];
			return 0;
		}
		cout<<-1;
		return 0;
	}
}
