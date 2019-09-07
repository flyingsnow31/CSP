#include<bits/stdc++.h>
using namespace std;

const int w[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
int main()
{
	int ans;
	string a;
	char y;
	while(1)
	{
		cin>>a;
		if(a=="-1")
		break;
		else
		{
			ans=0;
			for(int i=0;i<17;i++)
			{
				ans+=(a[i]-'0')*w[i];
			}
			ans=ans%11;
			switch(ans)
			{
				case 0:{y='1';break;}
				case 1:{y='0';break;}
				case 2:{y='X';break;}
				case 3:{y='9';break;}
				case 4:{y='8';break;}
				case 5:{y='7';break;}
				case 6:{y='6';break;}
				case 7:{y='5';break;}
				case 8:{y='4';break;}
				case 9:{y='3';break;}
				case 10:{y='2';break;}
			}
			if(y==a[17])
			cout<<"1\n";
			else
			cout<<"0\n";
		}
	}
 } 
