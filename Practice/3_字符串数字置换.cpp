#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a;
	int b,ans[10]={0};
	getline(cin,a);
	for( unsigned int i=0;i<a.length();i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		{b=a[i]-'0';
	switch(b)
	{
		case 0:{cout<<"(Zero)";ans[0]++;break;}
		case 1:{cout<<"(One)";ans[1]++;break;}
		case 2:{cout<<"(Two)";ans[2]++;break;}
		case 3:{cout<<"(Three)";ans[3]++;break;}
		case 4:{cout<<"(Four)";ans[4]++;break;}
		case 5:{cout<<"(Five)";ans[5]++;break;}
		case 6:{cout<<"(Six)";ans[6]++;break;}
		case 7:{cout<<"(Seven)";ans[7]++;break;}
		case 8:{cout<<"(Eight)";ans[8]++;break;}
		case 9:{cout<<"(Nine)";ans[9]++;break;}
	}
}
		else
		cout<<a[i]; 
	}
	cout<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<ans[i];
		if(i!=9)
		cout<<" ";
	}
}
