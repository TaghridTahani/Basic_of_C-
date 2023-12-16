#include<bits/stdc++.h>
using namespace std; 
long long int *sort_it(int n)
{
    long long int * a= new long long int[n]; 
    for(int i=0; i<n; i++)
    {
        cin>>a[i]; 
    }
    // for(int i=0; i<n; i++)
    // {
    //     for(int j=i+1; j<n; j++)
    //     {
    //         if(a[i]<a[j]){
    //             swap(a[i],a[j]); 
    //         }
    //     }
    // } 
    sort(a,a+n,greater<long long int>());
    return a;   

}
int main()
{
    int n; 
    cin>>n; 
    long long int *p=sort_it(n); 
    for(int i=0; i<n; i++)
    {
        cout<<p[i]<<" ";
    }
    return 0; 
}
        // if(i<n-1){
        //     cout<<p[i]<<" ";
        // } 
        // else if(i==n-1)
        // {
        //     cout<<p[i];

        // }