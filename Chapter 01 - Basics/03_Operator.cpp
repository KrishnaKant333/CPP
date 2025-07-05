#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;
    bool c = (a==b);
    cout<<c<<endl; // will return 0 becoz a and b are not equal

    bool e = (a>=b);
    cout<<e<<endl; // will return 0 becoz a is less than b

    bool f = (a<=b);
    cout<<f<<endl; // will return 1 becoz a is greater than b

    bool o = (a!=b);
    cout<<o; // will return 1 becoz a and b are equal
    return 0;
}