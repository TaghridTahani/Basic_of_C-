#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n; 
    cin>>n; 
    
    for(int i=0; i<n; i++)
    {
        int first_3=0; 
        int last_3=0; 
        string s; 
        cin>>s; 
        int k=0, j=s.size()-1; 
        while(k<j){

            first_3 = first_3+int(s[k]);
            last_3 = last_3+int(s[j]); 
            k++;
            j--;
        }
        if(first_3==last_3)
        {
            cout<<"YES"<<endl; 
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }
    return 0; 
}