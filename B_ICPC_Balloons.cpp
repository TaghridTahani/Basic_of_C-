#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int t; 
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int count=0 ;
        int n; 
        cin>>n; 
        string s; 
        cin>>s; 
        int a[26]={0};
         
        for(int j=0; j<n; j++)
        {
           
           for(int p=0; p<26; p++)
           {
                
                if(s[j]-'A'==p)
                {
                    if(a[p]==0)
                    {
                        a[p]=a[p]+2;
                        count=count+2; 
                        
                    }
                    else 
                    {
                        a[p]=a[p]+1;
                        count = count+1; 
                    }
                }
           }

        }
        cout<<count<<endl; 
    }      
    return 0; 
}