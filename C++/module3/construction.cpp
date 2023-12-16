#include<bits/stdc++.h>
using namespace std; 
class Student
{
public: 
    int roll; 
    int cls; 
    double gpa;
    //constructor, create a copy of that object 
    Student(int r, int c, double g)
    {
        //receieve para meter 
        //auto call hoy object banale 
        roll=r; 
        cls=c; 
        gpa=g; 
    } 

};
int main()
{
    // Student rahim; 
    // rahim.roll=29; 
    // rahim.cls=9; 
    // rahim.gpa=2.9;

    // Student karim; 
    // karim.roll=8; 
    // karim.cls=2; 
    // karim.gpa=3.4;
    Student rahim(29,9,5.00);
    cout<<rahim.cls;
    //this is a buil tin pointer 
    //(*this).roll=roll
    //-> arrow sign ashe, from dereference plus access .     
    return 0; 
}