#include "Person.h"
#include <iostream>
Person::Person(int a):val(a)
{
    //ctor
}

Person::~Person()
{
    //dtor
}

void Person::printAge(){
    std::cout << val       << std::endl;
    std::cout << this->val << std::endl;
}
