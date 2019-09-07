#include<bits/stdc++.h>
using namespace std;


///* 90  ³¬Ê± 
int main()
{
	char a[1000000];
	int n,i,l,j,k;
	cin>>n;
	getchar();
	while(n--)
	{
		k=0;
		gets(a);
		for(j=0; a[j]!='\0'; j++)
		{
			if(a[j]==' ')
			{
				for(i=j-1; i>k-1; i--)
					printf("%c",a[i]);
				printf(" ");
				k=j+1;
			}
		}
		for(i=j-1; i>k-1; i--)
			printf("%c",a[i]);
		cout<<endl;
	}
}//*/
