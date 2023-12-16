#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int t; 
    cin>>t;
    //cin.ignore(); 
    for(int i =0; i<t; i++)
    {
        string s, x;
        cin>>s>>x; 
        int n=x.size();
        while(s.find(x)!=-1)
        {
            int f=s.find(x);
            s.replace(f,n,"#");
        }
        cout<<s<<endl;
    }
    
    
    return 0; 
}
/*

#include<bits/stdc++.h>
using namespace std; 
int main()
{
    string s; 
    getline(cin, s); //Jessica
    int n=s.size();
    bool t=false; 
    for(int i=0; i<=n; i++)
    {
        if(s[i]==' ')
        {
            if(s[i+1]=='J')
            {
                if(s[i+2]=='e')
                {
                    if(s[i+3]=='s')
                    {
                        if(s[i+4]=='s')
                        {
                           if(s[i+5]=='i')
                            {
                                
                                if(s[i+6]=='c')
                                {
                                    if(s[i+7]=='a')
                                    {
                                        if(s[i+8]==' ')
                                        {
                                            t=true; 
                                            break; 
                                            
                                            
                                        }
                                        else
                                        {
                                            continue;
                                        } 

                                    }
                                    else{
                                        continue;
                                    }
                                }
                                else
                                {
                                    continue;
                                } 
                            }
                            else
                            {
                                continue;
                            }  
                            
                        }
                        else
                        {
                           continue; 
                        }
                        
                    }
                    else
                    {
                        continue; 
                    }
                

                }
                else
                {
                    continue; 
                }
                
            }
            else
            {
                continue; 
            }
           
        }
        else
        {
            continue; 
        }
        
    }
    if(t==true)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0; 
}
// 
                            // i= i+4;


*/