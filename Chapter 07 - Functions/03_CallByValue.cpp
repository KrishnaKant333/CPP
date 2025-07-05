#include <iostream>
using namespace std;

void swap(int x, int y)
{
    int t;
    t=x;
    x=y;
    y=t;
}

int main()
{
    int a=4,b=5;
    cout<<"Initial values before swapping:\n";
    cout<<a<<endl<<b<<"\n";
    cout<<"Final values after swapping:\n";
    swap(a,b);
    cout<<a<<endl<<b<<"\n";
    return 0;
}