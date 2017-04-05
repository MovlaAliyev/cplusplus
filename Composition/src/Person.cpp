#include "Person.h"
#include "Birthday.h"
#include <iostream>

using namespace std;


Person::Person(string n, Birthday bd)
:name(n),dateOfBirth(bd){
    //ctor
}

Person::~Person()
{
    //dtor
}

void Person::printInfo(){
    cout << name << " was born ";
    dateOfBirth.printDate();
}
