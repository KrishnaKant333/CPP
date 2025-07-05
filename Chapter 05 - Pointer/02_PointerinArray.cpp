#include <iostream>
using namespace std;

int main()
{
    int a[] = {23, 45, 63, 23};
    int * p = a; // no & operator required for pointer to an array
    for (int i = 0; i < 4; i++)
    {
        cout<<*p<<endl;
        p++;
    }
       
    return 0;
}