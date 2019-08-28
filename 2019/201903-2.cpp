#include<iostream>
#include<stack>
using namespace std;

int main()
{
	stack<int> a;
	int n,i,l,t;
	string s;
	cin>>n;
	while(n--)
	{
		cin>>s;
		l=s.length();
		for(i=0;i<l;i++)
		{
			if(s[i]>='0'&&s[i]<='9')
			a.push(s[i]-'0');
			else if(s[i]=='x')
			{
			t=a.top();
			a.pop();
			i++;
			t=t*(s[i]-'0');
			a.push(t);	
			}
			else if(s[i]=='/')
			{
			t=a.top();
			a.pop();
			i++;
			t=t/(s[i]-'0');
			a.push(t);	
			}
			else if(s[i]=='-')
			{
				i++;
				a.push(-(s[i]-'0'));
			}
		}
		t=0;
		while(!a.empty())
		{
			t+=a.top();
			a.pop();
		}
		if(t==24)
		cout<<"Yes\n";
		else
		cout<<"No\n";
	}
}
