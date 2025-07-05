#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age:"<<endl;
    cin>>age;
    if (age>=18)
    {
        cout<<"You are elligible for voting";
    }
    else
    {
        cout<<"You are not elligible for voting";
    }    
    return 0;
}