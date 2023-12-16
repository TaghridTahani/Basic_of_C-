#include<bits/stdc++.h>
using namespace std; 
int main()
{
    string s="Hello world hello world";
    while(s.find("world")!=-1)
    {
        int t=s.find("world");
        s.replace(t,5,"#");
    }
    cout<<s<<endl;
    return 0; 
}