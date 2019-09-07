#include<bits/stdc++.h>
using namespace std;

int yunsuan(string s)
{
	char t;
	int i,l=s.length(),ans=0;
	for(i=0;i<l;i++)
	{
		if(s[i]>'8')
		s[i]='7';
		else if(s[i]>'3')
		s[i]-=1;
			ans=ans*8+s[i]-'0'; 
	}
	return ans;
}

int main()
{
	string a;
	int p,t;
	cin>>t;
	while(t--)
	{
		
		cin>>a;
		cout<<yunsuan(a)<<endl;;
	}
 } 
