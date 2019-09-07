#include<iostream>
using namespace std;

int main()
{
	double m1=0;
	int n,i,a[100],b,m2=0;
	cin>>n;
	for(i=0; i<n; i++)
	{
		cin>>a[i];
		m2+=a[i];
	}
	for(i=0; i<n; i++)
	{
		cin>>b;
		if(b>89)
			m1+=4.0*a[i];
		else if(b>84)
			m1+=3.7*a[i];
		else if(b>81)
			m1+=3.3*a[i];
		else if(b>77)
			m1+=3.0*a[i];
		else if(b>74)
			m1+=2.7*a[i];
		else if(b>71)
			m1+=2.3*a[i];
		else if(b>67)
			m1+=2.0*a[i];
		else if(b>63)
			m1+=1.5*a[i];
		else if(b>59)
			m1+=1.0*a[i];
		else
			m1+=0.0*a[i];
	}
	m1=m1/m2*1.0;
	printf("%.2f",m1);
}
