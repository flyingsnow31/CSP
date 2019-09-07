#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,i,a[10001]= {0},m,n,j;
	cin>>t;
	for(i=0; i<10001; i++)
		a[i]=i+1;
		cin>>j;
	while(t--)
	{
		j=0;
		i=0;
		cin>>n>>m;
		list<int>l(a,a+n);
		list<int>::iterator it=l.begin();
		while(l.size()!=1)
		{
			i++;
			if(i==m)
			{
				if()
				it=l.erase(it);
				i=1;
			}
			if(it==l.end())
			{
				i++;
				it=l.begin();
			}
			else
				it++;
		}
		it=l.begin();
		cout<<*it;
	}
}
