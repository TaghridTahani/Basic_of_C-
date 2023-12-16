#include<bits/stdc++.h>
using namespace std; 
int main()
{ 
    int n,mx; 
    cin >> n; 
    int a[n]; 
    for(int i=0; i<n; i++)
    {
        cin >> a[i]; 
    }
    // mx=a[0]; 
    // for(int i=0; i<n-1; i++)
    // {
    //     if(a[i]>mx)
    //     {
    //         mx=a[i];
    //     }

    // }
    int p= sizeof(a)/ sizeof(a[0]); //number of elemnet 
     
    cout <<*max_element(a, a + p); 
    
    return 0; 
}