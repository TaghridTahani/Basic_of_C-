#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n; 
    cin >> n; 
    int a[n]; 
    for(int i=0; i<n; i++) 
    {
        cin>>a[i]; 
    }
    //sort(a,a+n)-----> desending order e sort
    sort(a, a+n,greater<int>()); //built in compare funtion, array data type, decending order a sort kore
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" "; 
    }
    return 0; 
}