#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,t,w,s,ans,j;
	string a;
	cin>>t;
		while(t--)
	{
		ans=0;
	cin>>w>>a;
	for(i=0;i<a.length();i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			ans=ans+a[i]-'0'; 
		}
		else if(a[i]>='a')
		{
			ans=ans+a[i]-'a'+10;
		}
	}
	s=ans;
	for(i=0;i<w;i++)
	{
		s=ans+i;
		j=w-1;
		if(s%j==0)
		{
			ans=i;
		break;
		}
	}
	if(ans>9)
	{
	switch(ans)
	{
		case 10:cout<<'a'<<endl;break;
		case 11:cout<<'b'<<endl;break;
		case 12:cout<<'c'<<endl;break;
		case 13:cout<<'d'<<endl;break;
		case 14:cout<<'e'<<endl;break;
		case 15:cout<<'f'<<endl;break;
	}
	}
	else
	cout<<ans<<endl;
	}
}
  
/* 0
int yunsuan(int w,string s)
{
	char t;
	int i,l=s.length(),ans=0;
	for(i=0;i<l;i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			ans=ans*w+s[i]-'0'; 
		}
		else if(s[i]>='a')
		{
			ans=ans*w+s[i]-'a'+10;
		}
	}
	return ans;
}
int main()
{
	int i,t,w,s,ans,j;
	string a;
	cin>>t;
		while(t--)
	{
	cin>>w>>a;
	s=yunsuan(w,a);
	for(i=0;i<w;i++)
	{
		ans=s*w+i;
		j=w-1;
		if(ans%j==0)
		{
			ans=i;
		break;
		}
	}
	if(ans>9)
	{
	switch(ans)
	{
		case 10:cout<<'a'<<endl;break;
		case 11:cout<<'b'<<endl;break;
		case 12:cout<<'c'<<endl;break;
		case 13:cout<<'d'<<endl;break;
		case 14:cout<<'e'<<endl;break;
		case 15:cout<<'f'<<endl;break;
	}
	}
	else
	cout<<ans<<endl;
	}
}*/
