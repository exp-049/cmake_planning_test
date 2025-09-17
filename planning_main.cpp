#include<iostream>
#include "process.h"
using std::cout, std::endl;

int main()
{
    cout << "This is main function" << endl;
    Process pro;
    pro.planProcess();
    cout << "Main function done!" << endl;
    return 0;
}  