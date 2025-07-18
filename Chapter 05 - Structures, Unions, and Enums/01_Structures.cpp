#include <iostream>
using namespace std;

struct employee
{
    int eID;
    char favchar;
    float salary;
};


int main()
{   
    struct employee e1, e2;
    cout<<"Enter the eID, favchar and salary of the first employee:\n";
    cin>>e1.eID;
    cin>>e1.favchar;
    cin>>e1.salary;


    cout<<"Enter the eID, favchar and salary of the second employee:\n";
    cin>>e2.eID;
    cin>>e2.favchar;
    cin>>e2.salary;

    cout<<"The ID, favchar and salary of first customer is:\n"<<e1.eID<<"\n"<<e1.favchar<<"\n"<<e1.salary<<endl;
    cout<<"The ID, favchar and salary of second customer is:\n"<<e2.eID<<"\n"<<e2.favchar<<"\n"<<e2.salary<<endl;
    return 0;

}