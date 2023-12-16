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
Student * fun()
{
    //Student is mu datatype, so its return typed 
    Student * rahim= new Student(342,5,4.3); 
     
    return rahim; 

}
int main()
{
    Student* ans = fun(); 
    //cout<<ans.roll<<endl; 
    cout<<(*ans).roll<<endl; //ans->roll, //gives garbeg value for more than 1 value thats why we need dynamic ojects.
    delete ans; 
    return 0; 
}