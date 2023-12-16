#include<bits/stdc++.h>
using namespace std; 
void reverse(stringstream & ss)
{
    string word; 
    if(ss>>word){
        reverse(ss); 
        cout<<word; 
    } 
}
int main()
{
    string s; 
    getline(cin,s);
    //int n=s.size(); 
    // for(int i=n; i>=0; i--)
    // {
    //     cout<<s[i]; 
    // }
    stringstream ss(s); 
    reverse(ss);  
    return 0; 
}
/*
#include<bits/stdc++.h>
using namespace std; 
void reverse(stringstream & ss)
{
    string word; 
    
    if(ss>>word){ 
        int n=word.size();
        for(int i=n; i>=0; i--)
        {
           if(word[0]==' ')
           {
            continue; 
           } 
           else{
             cout<<word[i];
           }
        } 
        reverse(ss);
    } 
}
int main()
{
    string s; 
    getline(cin,s);
    stringstream ss(s); 
    reverse(ss);  
    return 0; 
}*/
/*
void reverse(stringstream & ss)
{
    string word; 
    if(ss>>word)
    {
        for(int i=word.size()-1; i>=0; i--)
            {
                cout<<word[i]; 
            }
        cout<<' '; 
        
        word.pop_back();
        reverse(ss);    
    }*/