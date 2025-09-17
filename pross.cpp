#include<iostream>
#include "process.h"
using std::cout, std::endl;

void process::planProcess()
{
    cout << "This is process class" << endl;
    my_map.mapInfo();
    cout << "Process planning done!" << endl;
}