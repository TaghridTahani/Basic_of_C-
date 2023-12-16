#include<iostream>
#include<algorithm>
using namespace std; 
int main(){
    // int a,b;
    // cin >> a>>b;  
    // int c= min(a,b); 
    // int d= max(a,b); 
    // cout<<c<<" "<<b<<endl; 
    int a, b,c,d; 
    cin >> a>>b>>c>>d; 
    int min_a=min({a,b,c,d});
    cout<<min_a<<endl;
    return 0; 
}