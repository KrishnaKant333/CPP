#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number:\n";
    cin>>n;
    if (n<100)
    {
        cout<<"The number you entered is less than a hundred";
    }
    else if (n>100)
    {
        cout<<"The number you entered is greater than a hundred";
    }
    else
    {
        cout<<"The number you entered is 100";
    }
    
    
    return 0;
}