#include <iostream>
#include "Person.h"
using namespace std;

int main(){
    Person p;
    Person *ptr = &p;


    // normal calling
    p.printName();

    //ptr calling
    ptr->printName();

    return 0;
}
