#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s); 
    string word; 
    bool some=false; 
    
    int count=0;

    for(int i=0; i<s.size();i++)
    {
        if(isalpha(s[i])){
            if(some==false)
            {
                count++; 
                some=true; 
            }     
            
        }
        else {
            some = false; 
        }
    }

    cout<<count<<endl;
    return 0;
}