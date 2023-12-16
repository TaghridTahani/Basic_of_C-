#include<bits/stdc++.h>
using namespace std; 
int main()
{
    char a; 
    cin>> a; 
    int ascii= int(a);
    if(ascii>=65 && ascii<=90)
    {
        cout<<"ALPHA"<<endl<<"IS CAPITAL";
    }
    else if(ascii>=48 && ascii<=57)
    {
        cout<<"IS DIGIT";
    }
    else if(ascii>=97 && ascii<=122)
    {
        cout<<"ALPHA"<<endl<<"IS SMALL";
    }
    return 0; 

}