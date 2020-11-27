#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int rank;
    cin >> rank;
    switch(rank)
    {
        case 1 :
            cout << "Your Salary: 2,50,000 BDT";
            break;
        case 2 :
            cout << "Your Salary: 2,10,000 BDT";
            break;
        case 3 :
            cout << "Your Salary: 1,15,000 BDT";
            break;
        case 4 :
            cout << "Your Salary: 80,000 BDT";
            break;
        case 5 :
            cout << "Your Salary: 50,000 BDT";
            break;
        default :
            cout << "Your Salary: 50,000 BDT";
    }
}