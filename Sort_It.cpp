#include<bits/stdc++.h>
using namespace std; 
class Student
{
public:
    string nm;
    int cls;
    char sec; 
    int id;
    int m_marks;
    int e_marks;
      

};
bool cmp(Student a, Student b)
{
    if((a.m_marks+a.e_marks)>(b.m_marks+b.e_marks))return true;
    else if((a.m_marks+a.e_marks)<(b.m_marks+b.e_marks))return false;
    else if((a.m_marks+a.e_marks)==(b.m_marks+b.e_marks))
    {
        if(a.id<b.id)
        {
            return true; 
        }
        else return false; 
    }
    else return false;
}
int main()
{
    int n; 
    cin>>n; 
    
    Student a[n]; 
    for(int i=0; i<n; i++)
    {
 
        cin>>a[i].nm>>a[i].cls>>a[i].sec>>a[i].id>>a[i].m_marks>>a[i].e_marks;
    } 
    sort(a,a+n,cmp);
    for(int i=0; i<n; i++)
    {
 
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].sec<<" "<<a[i].id<<" "<<a[i].m_marks<<" "<<a[i].e_marks<<endl;
    } 
    
    
    return 0; 
}