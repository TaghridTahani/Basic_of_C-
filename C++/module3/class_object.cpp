#include<bits/stdc++.h>
using namespace std; 
class Student
{
public:
    char name[100]; 
    int roll; 
    double cgpa; 

};
int main()
{
    //int a,b; 
    Student a,b; 
    // a.roll=22; 
    // a.cgpa=4.5;
    // char tmp[100]="rakib"; 
    // strcpy(a.name,tmp); *** initialized korlei nam ta maine initializes kore nite parbo kintu input easily neoa jabe
    cin>>a.name>>a.cgpa>>a.roll; 
    cin>>b.name>>b.cgpa>>b.roll;
    
    cout<<a.name<<" "<<a.cgpa<<" "<<a.roll<<endl; 
    cout<<b.name<<" "<<b.cgpa<<" "<<b.roll<<endl;

    //cin.getline(a.name,100); 
    //cin>>a.cgpa>>a.roll;
    //enter er jonne ----> getchar(); 

 
    return 0; 
}