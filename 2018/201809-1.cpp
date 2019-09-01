#include<iostream>
using namespace std;

int main()
{
	int i,n,a,b,t,q;
	cin>>n;
	for(i=0;i<n;i++)
	{
		q=a;
		cin>>t;
		if(i==1)
		{
			cout<<(t+a)/2<<" ";
		}
		if(i>1)
		{
			cout<<(t+b+a)/3<<" ";
		}
		b=a;
		a=t;
	}
	cout<<(a+q)/2;
 } 
