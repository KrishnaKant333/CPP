#include <iostream>
using namespace std;

typedef struct employee
{
    int eID; // 4
    char favchar; // 2
    float salary; // 4
    // so a structure takes 4+2+4 = 10 bytes in memeory but union operates differently.....
} ep;

int main()
{
    ep e1, e2;
    e1.eID = 102;
    e1.favchar = 'c';
    e1.salary = 39000;

    e2.eID = 103;
    e2.favchar = 'd';
    e2.salary = 41000;

    cout<<"The ID, favchar and salary of first customer is:\n"<<e1.eID<<"\n"<<e1.favchar<<"\n"<<e1.salary<<endl;
    cout<<"The ID, favchar and salary of second customer is:\n"<<e2.eID<<"\n"<<e2.favchar<<"\n"<<e2.salary<<endl;
    return 0;

}