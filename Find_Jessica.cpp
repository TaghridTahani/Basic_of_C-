#include<bits/stdc++.h>
using namespace std; 
int main()
{
    string s; 
    getline(cin, s);
    stringstream ss(s);
    string word; 
    bool t=false;
    while(ss>>word)
    {
        if(word=="Jessica")
        {
            t=true;
            break;
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