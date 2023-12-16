#include<bits/stdc++.h>
using namespace std; 
class Student
{
    public:
    int roll; 
    int cls; 
    double gpa;
    Student(int r, int c, double g)
    {
        roll=r; 
        cls=c; 
        gpa=g;
    }
};

int main()
{
    Student rahim(1,2,3.2); 
    Student * karim = new Student(1,2,3.2); 
    cout<<karim->cls<<" "<<karim->gpa<<" "<<karim->roll<<endl; 
    
    return 0; 
}