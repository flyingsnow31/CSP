#include<bits/stdc++.h>
using namespace std;

string _mon[19]={".pop",".no",".zip",".zotz",".tzec",".xul",".yoxkin",".mol",".chen",".yax",".zac",".ceh",".mac",".kankin",".muan",".pax",".koyab",".cumhu",".uayet"};
string _day[20]={"imix","ik","akbal","kan","chicchan","cimi","manik","lamat","muluk","ok","chuen","eb","ben","ix","mem","cib","caban","eznab","canac","ahau"};

int main()
{
	string mon;
	int n,i,days,year,j,day,years,months;
	cin>>n;
	while(n--)
	{
		cin>>day>>mon>>year;
		days=(year*365+day);
		for(j=0;j<19;j++)
		{
			if(mon==_mon[j])
			{
				if(j==18)
				{
					days+=360;
				}
				else
				{
					days+=j*20;
				}
				break;
			}
		}
		years=days/260;
		months=days%260%20;
		days=days%260%13+1;
		cout<<days<<" "<<_day[months]<<" "<<years<<endl;
	}
}
