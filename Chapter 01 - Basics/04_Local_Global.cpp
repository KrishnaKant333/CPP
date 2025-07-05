#include <iostream>
using namespace std;

int c = 45;

int main()
{   
    int a, b, c;    
    cout<<"Enter the two numbers :\n";
    cin>>a>>b;
    c = a + b;
    cout<<"The sum is "<<c<<endl; // this c is local c 
    cout<<"The sum is "<<::c; // this c is global c
    return 0;
}