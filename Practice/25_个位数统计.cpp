#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a;
	cin>>a;
	int len=a.length(),b[10]={0},i;
	for(i=0;i<len;i++)
	{
		b[a[i]-'0']++;
	}
	for(i=0;i<10;i++)
	{
		if(b[i]!=0)
		cout<<i<<":"<<b[i]<<"\n";
	}
} 
