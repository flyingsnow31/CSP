#include<iostream>
using namespace std;

int main()
{
	int n,i;
	while(1)
	{i=0;
		cin>>n;
		if(n==0)return 0;
		for(i=0;n!=1;i++)
		{
			if(n&1)
			{
				n=(3*n+1)/2;
			}
			else
			n/=2;
		}
		cout<<i<<endl;
	}
}
