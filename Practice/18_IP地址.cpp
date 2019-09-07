#include<iostream>
using namespace std;

int bit(unsigned int x)
{
    int c = 0;
    while( x )
    {
        c++;
        x = (x & (x - 1));
    }
    return c;
}
int main()
{
	int t,a,b,c,d,ans;
	char m;
	cin>>t;
	while(t--)
	{
		ans=0;
		cin>>a>>m>>b>>m>>c>>m>>d;
		ans=bit(a)+bit(b)+bit(c)+bit(d);
		cout<<ans<<"\n";
	}
}
