#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m1,m2,r1,r2,r3,l,i;
	string s;
	while(cin>>m1>>m2)
	{
		cin>>s;
		l=s.length();
		for(i=0;i<l;i++)
		{
			switch(s[i])
			{
				case 'A':
					{
						r1=m1;
						break;
					}
				case 'B':
					{
						r2=m2;
						break;
					}
				case 'C':
					{
						m1=r3;
						break;
					}
				case 'D':
					{
						m2=r3;
						break;
					}
				case 'E':
					{
						r3=r1+r2;
						break;
					}
				case 'F':
					{
						r3=r1-r2;
						break;
					}
			}
		}
		cout<<m1<<","<<m2<<endl;
	}

} 
