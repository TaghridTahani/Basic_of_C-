#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char sec; 
    int id;
      

}; 
int main()
{
    int n; 
    cin>>n; 
    
    Student a[n]; 
    for(int i=0; i<n; i++)
    {
 
        cin>>a[i].nm>>a[i].cls>>a[i].sec>>a[i].id;
    } 
    
    // for(int i=0; i<n-1; i++ )
    // {
    //     for(int j=n-1; j>=0; j--)
    //     {
            
    //         swap(a[i].sec,a[j].sec);
    //     }
    // }
    int k=0; 
    int p=n-1; 
    while(k<p)
    {
        swap(a[k].sec,a[p].sec);
        k++;
        p--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].sec <<" "<<a[i].id<< endl;
    }
    
    return 0; 
}