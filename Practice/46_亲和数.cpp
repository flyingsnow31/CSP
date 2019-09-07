#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,m,i;
	while(cin>>a>>b)
	{
		m=0;
		for(i=1;i<a/2+1;i++)
		{
			if(a%i==0)
			{
				m+=i;
			}
		}
		if(m==b)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}


}
