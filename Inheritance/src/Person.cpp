#include "Person.h"

#include <iostream>

Person::Person(){
    //ctor
}

Person::~Person(){
    //dtor
}

void Person::sayName(){
    std::cout << "Say name function" << std::endl;
}
