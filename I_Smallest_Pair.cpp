#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int t; 
    cin>>t; 
    for(int k=1; k<=t; k++)
    {
        int n; 
        cin>>n; 
        int a[n]; 
        for(int p=0; p<n; p++)
        {
            cin>>a[p]; 
        }
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int sum= a[i]+a[j]+j-i; 

            }
        } 

    }
    return 0; 
}