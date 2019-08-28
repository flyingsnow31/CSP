#include<iostream>
using namespace std;

int main() {
	int t,n,i,max,min,mid1,mid2;
	cin>>n;
	if(n&1) {
		for(i=0; i<n; i++) {
			cin>>t;
			if(i==0) {
				max=t;
			}
			if(i==n/2) {
				mid1=t;
			}
			if(i==n-1) {
				min=t;
			}
		}
		if(max<min) {
			t=max;
			max=min;
			min=t;
		}
		cout<<max<<" "<<mid1<<" "<<min;
	} else {
		for(i=0; i<n; i++) {
			cin>>t;
			if(i==0) {
				max=t;
			}
			if(i==n/2-1) {
				mid1=t;
			}
			if(i==n/2) {
				mid2=t;
			}
			if(i==n-1) {
				min=t;
			}
		}
		if(mid1+mid2&1) {
			double ans=(mid1+mid2);
			double(mid1)=ans/2;
			if(max<min) {
			t=max;
			max=min;
			min=t;
		}
		printf("%d %.1f %d",max,mid1,min);
		} 
		else {
			mid1=(mid1+mid2)/2;
			if(max<min) {
				t=max;
				max=min;
				min=t;
			}
			cout<<max<<" "<<mid1<<" "<<min;
		}
	}

}
