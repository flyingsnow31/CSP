#include<iostream>
using namespace std;
/*
int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31} ;
void w(int n)
{
	switch(n%7)
	{
		case 0:cout<<"Saturday"<<endl;break;
			case 1:cout<<"Sunday"<<endl;break;
			case 2:cout<<"Monday"<<endl;break;
			case 3:cout<<"Tuesday"<<endl;break;
			case 4:cout<<"Wednesday"<<endl;break;
			case 5:cout<<"Thursday"<<endl;break;
			case 6:cout<<"Friday"<<endl;break;
	}
}
int run(int n)
{
	if(n%400==0||(n%4==0&&n%100!=0))
	return 366;
	else
	return 365;
}
int main()
{
	int n,a=1999,b;
	while(1){
		a=1999;
	cin>>n;
	b=n;
	if(n==-1)
	return 0;
	while(n>0)
	{
		a++;
		n=n-run(a);
	}
	cout<<a<<"-";
	if(run(a)==366)
	m[2]=29;
	a=0;
	n=n+run(a);
	while(n>0)
	{
		a++;
		n=n-m[a];
	}
	if(a<10)
	cout<<'0';
	cout<<a<<"-";
	n=n+m[a];
	if(n<9)
	cout<<'0';
	cout<<n+1<<" ";
	w(b);
	m[2]=28;}
}
*/

char week[7][10]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
int year[2]={365,366};
int month[2][12]={31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
int type(int m)
{
	//判断第m年是否是闰年,是则返回1,否则返回0
	if (m % 4 != 0 || (m % 100 == 0 && m % 400 != 0))
		return 0;
	else return 1;
}
 
int main(int argc, char const *argv[])
{
	int days,dayofweek;//days表示输入的天数,dayofweek表示星期几
	int i = 0,j = 0;
	while(scanf("%d",&days) && days != -1)
	{
		dayofweek = days % 7;
		for(i = 2000;days >= year[type(i)]; i++)
			days -= year[type(i)];
		for(j = 0;days >= month[type(i)][j]; j++)
			days -= month[type(i)][j];
		printf("%d-%02d-%02d %s\n",i,j+1,days+1,week[dayofweek] );
	}
	return 0;
}

