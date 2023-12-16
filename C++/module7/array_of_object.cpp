#include<bits/stdc++.h>
using namespace std; 
class Student
{
public:
    string name;
    int roll; 
    char sec;
      

};
int main()
{
    /*
    Student * a= new Student[n] //Dynamic array 
    */
    int n; 
    cin>>n; 
    //cin.ignore()
    Student a[n]; 
    for(int i=0; i<n; i++)
    {
        //getline(cin,a[i].name)
        //cin.ignore()
        cin>>a[i].name>>a[i].roll>>a[i].sec;
    }

    
    return 0; 
}