#include<bits/stdc++.h>
using namespace std;

 int main()
{
	int t,len,i,k[4],j,b;
	bool flag;
	cin>>t;
	string a;
	while(t--)
	{memset(k,0,sizeof(k));
		flag=1;
		cin>>a;
		len=a.length();
		if(len<=2000)
		{
		j=len;
		while(j)
		{
			if(a.find("()",0)!=-1)
			b=a.find("()",0);
			else if(a.find("[]",0)!=-1)
			b=a.find("[]",0);
			else if(a.find("{}",0)!=-1)
			b=a.find("{}",0);
			else if(a.find("<>",0)!=-1)
			b=a.find("<>",0);
			else
			{
				cout<<"No\n";
				goto loop1;
			}
			a.erase(b,2);
			j=j-2;
		}
		cout<<"Yes\n";
		loop1:;}
		else
		{
			for(i=0;i<len;i++)
		{
			if(a[i]=='<')
			k[0]++;
			else if(a[i]=='>')
			k[0]--;
			else if(a[i]=='(')
			k[1]++;
			else if(a[i]==')')
			k[1]--;
			else if(a[i]=='[')
			k[2]++;			
			else if(a[i]==']')
			k[2]--;
			else if(a[i]=='{')
			k[3]++;
			else if(a[i]=='}')
			k[3]--;
			for(j=0;j<4;j++)
			{if(k[j]<0)
			{cout<<"No\n";
			flag=0;
			break;
			}
			}
			if(flag==0)
			break;
		}
		for(j=0;j<4;j++)
			{if(k[j]!=0&&flag==1)
			{cout<<"No\n";
			flag=0;
			break;
			}}
		if(flag==1)
		cout<<"Yes\n";
		}
	}
}
		

/* 90 
int main()
{
	int t,len,i,k[4],j;
	bool flag;
	cin>>t;
	string a;
	while(t--)
	{
		flag=1;
		memset(k,0,sizeof(k));
		cin>>a;
		len=a.length();
		for(i=0;i<len;i++)
		{
			if(a[i]=='<')
			k[0]++;
			else if(a[i]=='>')
			k[0]--;
			else if(a[i]=='(')
			k[1]++;
			else if(a[i]==')')
			k[1]--;
			else if(a[i]=='[')
			k[2]++;			
			else if(a[i]==']')
			k[2]--;
			else if(a[i]=='{')
			k[3]++;
			else if(a[i]=='}')
			k[3]--;
			for(j=0;j<4;j++)
			{if(k[j]<0)
			{cout<<"No\n";
			flag=0;
			break;
			}
			}
			if(flag==0)
			break;
		}
		for(j=0;j<4;j++)
			{if(k[j]!=0&&flag==1)
			{cout<<"No\n";
			flag=0;
			break;
			}}
		if(flag==1)
		cout<<"Yes\n";
	}
}*/ 
