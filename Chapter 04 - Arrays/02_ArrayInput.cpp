#include <iostream>
using namespace std;

int main()
{
    int a[5];
    cout<<"Enter the elements of the array:\n";
    for (int i = 0; i < 5; i++)
    {
        cin>>a[i];
    }

    cout<<"The elements of the array are:\n";
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<endl;
    }
    
    
    return 0;
}