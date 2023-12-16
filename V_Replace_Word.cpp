#include<bits/stdc++.h>
using namespace std; 
int main()
{
    string s; 
    cin>>s; 
    int n=s.size()-1;
    for(int i=0; i<=n; i++)
    {
        if(s[i]=='E')
        {
            if(s[i+1]=='G')
            {
                if(s[i+2]=='Y')
                {
                    if(s[i+3]=='P')
                    {
                        if(s[i+4]=='T')
                        {
                            cout<<" ";
                            i= i+4;
                            
                        }
                        else
                        {
                            cout<<s[i]; 
                        }
                        
                    }
                    else
                    {
                        cout<<s[i]; 
                    }
                

                }
                else
                {
                    cout<<s[i]; 
                }
                
            }
            else
            {
                cout<<s[i]; 
            }
           
        }
        else
        {
            cout<<s[i]; 
        }
        
    }
    return 0; 
}
//EGYPT
/*
int t=s.find("EGYPT")
cout<<t; 
s.replace(t,5,' ')

while(s.find("EGYPT")!=-1)
{
    s.replace(s.find("EGYPT"),5,' ')
}
*/