#include<iostream>
using namespace std; 
int sum=76; 
int main(){
    int a,b,c; 
    cin>>a>>b>>c; 
    int sum; 
    sum= a+b+c; 
    cout<<"sum of three number : "<<sum<<endl; 
    cout<<"The global sum was : "<<::sum<<endl; 
    int asci; 
    char g,f; 
    cin >> g >> f;
    asci= g; 
    cout<<"Ascii value of a character : "<<asci<<endl;
    cout<<"Type casting from character to int : "<<int(f)<<endl; 
    //MUtiple word er data type hole typecasting e data type takeo brackets e rakha lage (long long int)(a);
    

    return 0; 
}