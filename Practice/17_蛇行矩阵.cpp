#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[101][101];
	a[0][0]=1;
	for(int i=1;i<n;i++)
	{
		a[i][0]=a[i-1][0]+i;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<n-i;j++)
		{
			a[i][j]=a[i][j-1]+j+1+i;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i][0];
		for(int j=1;j<n-i;j++)
		{
			cout<<" "<<a[i][j];
		}
		cout<<endl;
	}
}
