#include <iostream>
using namespace std;

union barter
{
    int rice; //4
    char car; //2
    int pound; //4
    // so a union takes the max = 4 bytes and we can use only one of its variables
    // at a time
};

int main()
{
    union barter b1;
    b1.rice = 90;
    cout<<b1.rice<<endl;
    // prints 90  

    b1.rice = 90;
    b1.car = 'a';
    cout<<b1.rice<<endl;
    // prints overwritten ascii value of a = 97;

    b1.rice = 90;
    b1.car = 'a';
    b1.pound = 32;
    cout<<b1.rice<<endl;
    // prints overwritten 32;

    b1.rice = 90;
    b1.car = 'a';
    cout<<b1.car<<endl;
    // prints a

    b1.rice = 90;
    b1.car = 'a';
    b1.pound = 32;
    cout<<b1.car<<endl;
    // prints nothing;

    b1.rice = 90;
    b1.car = 'a';
    b1.pound = 32;
    cout<<b1.pound<<endl;
    // prints 32;

    return 0;
}