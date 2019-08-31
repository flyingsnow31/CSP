#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> a,b;
	int i,j=0,k,t,r,l,a1=INT_MIN,a2=INT_MAX-1,a3=INT_MAX-2,a4=INT_MAX,an1=0,an2=0;
	int num=0,n;
	cin>>t;
	while(t--)
	{
		a.clear();
		a1=INT_MIN;a2=INT_MAX-1;a3=INT_MAX-2;a4=INT_MAX;an1=0;an2=0;num=0;
		cin>>n;
		for(i=0; i<n; i++)
		{
			cin>>j;
			a.push_back(j);
		}
		i=1;
		while(a[i-1]<a[i]&&i<n)
		{
			num++;
			a1=a[i-1];
			i++;
		}
		if(a[i-1]>a[i]&&i<n)
		{
		an1=i-1;
		a2=a[i-1];}
		while(a[i-1]>a[i]&&i<n)
		{
			num++;
			a3=a[i-1];
			an2=i;
			i++;
		}
		if(a[i-1]<a[i]&&i<n)
		{
			a4=a[i-1];
		}
		while(a[i-1]<a[i]&&i<n)
		{
			num++;
		}
		num++; 
		if(num!=n)
		{
			cout<<"no\n";
		}
		else if(a3<a1||a2>a4)
		{
			cout<<"no\n";
		}
		else
		{
			cout<<an1+1<<" "<<an2+1<<endl;
		}
	}
}
