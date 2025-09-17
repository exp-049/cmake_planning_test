#include<iostream>
#include "process.h"
using std::cout, std::endl;

void Process::planProcess()
{
    cout << "This is process class" << endl;
    my_map.mapInfo();
    cout << "Process planning done!" << endl;
}