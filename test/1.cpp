#include<iostream>
using namespace std;

int main()
{
	int t,i,n,l2=0,r2=0;
	cin>>n;
	for(i=1;i<n+1;i++)
	{
		cin>>t;
		if(t==0)
		{
			l2=i;
		/*	if(n1==0)
			{
				l1=i;
				l2=i;
				n1++;
			}
			else 
			{
				l2=i;
				n1++;
			}*/
		}
		else
		{
			r2=i;
		/*	if(n2==0)
			{
				r1=i;
				r2=i;
				n2++;
			}
			else 
			{
				r2=i;
				n2++;
			}*/
		}
	}
	if(t==1)
	{
		cout<<l2;
	}
	else
	cout<<r2;
 } 
