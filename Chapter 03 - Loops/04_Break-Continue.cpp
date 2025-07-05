#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        if (i == 2)
        {
            // continue; // skips the rest of the code when condition is met
            // break; // skips all the iteration following the condition
        }
        cout<<i<<endl;

    }
    
    return 0;
}