#include "Birthday.h"
#include <iostream>

using namespace std;

Birthday::Birthday(int d, int m, int y){
    day   = d;
    month = m;
    year  = y;
}

Birthday::~Birthday()
{
    //dtor
}

void Birthday::printDate(){
    cout << day << "/" << month << "/" << year << endl;
}
