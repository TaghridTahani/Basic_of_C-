#include<bits/stdc++.h>
using namespace std; 
int main()
{
    char s[100001];
    while((cin.getline(s,100001))){

        sort(s, s+strlen(s));
        int count=0; 
        for (int i = 0; s[i]; i++)
            if (s[i] != ' ')
            s[count++] = s[i];
                                   
        s[count] = '\0';
      
        cout<<s<<endl; 
        

    }    
    
    return 0; 
}