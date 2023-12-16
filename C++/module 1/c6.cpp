#include<iostream>
using namespace std; 
int main(){
    int x=3; 
    // switch (x)
    // {
    //     case 1:
    //         cout<<"one"<<endl; 
    //         break;
    //     case 3: 
    //         cout<<"Three"<<endl; 
    //         break; 
    
    //     default:
    //         cout<<"kichu mile nai"<<endl;
    //         break;
    // }
    switch(x%3)
    {
        case 0:
            cout<<"Even";
            break; 

        default:
            cout<<"vag hoyni";
            break;
    }
    return 0; 
}