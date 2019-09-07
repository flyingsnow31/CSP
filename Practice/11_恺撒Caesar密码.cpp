#include<bits/stdc++.h>
using namespace std;

int main()
{
    string caeserPwd;     
    string abcde = "VWXYZ"; 
    string over;           
    int len = 0;            
    while(1)                
    {
        getline(cin,caeserPwd);    
		if("ENDOFINPUT" == caeserPwd) 
        {
            break;
        }  
            getline(cin,caeserPwd); 
            len = caeserPwd.length(); 
            for(int i=0; i<len; i++)
            {
                if(caeserPwd[i] >= 'A' && caeserPwd[i] <= 'E')   
                    caeserPwd[i] = abcde[caeserPwd[i] - 'A'];
                else if(caeserPwd[i] >'E' && caeserPwd[i] <='Z') 
                    caeserPwd[i] = caeserPwd[i] - 5;
            }
            getline(cin,over);        
            if("END" == over)            
                cout << caeserPwd << endl;
    }
    return 0;
}

