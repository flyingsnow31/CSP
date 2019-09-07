#include<bits/stdc++.h>
using namespace std;

int qb(int a[],int n,int i,int mb)
{
	if(i>n||mb<0)
	return 2001;
	if(mb==0)return 0;
	return min(1+qb(a,n,i,mb-a[i]),qb(a,n,i+1,mb));
}
int main()
{
	int mb,n,a[10],i,ans;
	while(1)
	{
		cin>>mb;
		if(mb==0)
		return 0;
		cin>>n;
		for(i=0;i<n;i++)
		cin>>a[i];
		ans=qb(a,n-1,0,mb);
		if(ans==2001)
		cout<<"Impossible\n";
		else
		cout<<ans<<endl;
	}
}
