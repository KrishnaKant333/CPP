#include <iostream>
using namespace std;

int fact(int);

int main()
{   
    int num;
    cout<<"Enter a number:\n";
    cin>>num;
    cout<<"Factorial of the number is "<<fact(num); // num is actual argument
    return 0;
}

int fact(int x)
{   
    // x is formal argument
    int f = 1;
    for (int i = 1; i <= x; i++)
    {
        f *= i;
    }
    return f;
    
}