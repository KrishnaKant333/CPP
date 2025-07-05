#include <iostream>
using namespace std;

int main()
{
    cout << "Odd numbers from 1 to 100 are:" << endl;
    int i = 1;
    do
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
        }
        i++;

    } while (i <= 100);

    return 0;
}