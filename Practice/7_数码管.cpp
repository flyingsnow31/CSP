#include<bits/stdc++.h>
using namespace std;

int a[10][10]={{1,1,0,0,0,0,0,1,1,0},
                {1,1,0,1,1,0,0,1,1,1},
                {0,0,1,0,0,0,0,0,1,0},
                {0,1,0,1,0,0,0,1,1,1},
                {0,1,0,0,1,0,0,0,1,1},
                {0,0,0,0,0,1,1,0,1,1},
                {0,0,0,0,0,1,1,0,1,0},
                {1,1,0,1,0,0,0,1,1,1},
                {1,1,1,1,1,1,1,1,1,1},
                {0,1,0,1,1,1,0,1,1,1}};

int main()
{
    int n[10];
    int x;
    while(1){
        scanf("%d",&x);
        int flag=0;
        if(x==-1)
            break;
        else
            n[0]=x;
         for(int i=1;i<10;i++){
            cin>>n[i];
        }
        for(int i=0;i<9;i++){
            if(a[n[i]][n[i+1]]==0){
                flag=1;
            }
            if(flag){
                cout<<"NO"<<endl;
                break;
            }
        }
        if(flag==0)
            cout<<"YES"<<endl;
    }
    return 0;
}

