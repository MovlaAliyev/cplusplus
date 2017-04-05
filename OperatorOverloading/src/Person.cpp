#include "Person.h"

Person::Person(){
    //ctor
}

Person::Person(int a){
    num = a;
}

Person::~Person()
{
    //dtor
}


Person Person::operator+(Person p){
    Person _p;
    _p.numTwo = num + p.num;
    return (_p);
}

Person Person::operator*(Person p){
    Person _p;
    _p.numTwo = num * p.num;
    return (_p);
}

Person Person::operator/(Person p){
    Person _p;
    _p.numTwo =  num / p.num;
    return (_p);
}

Person Person::operator++(){
    Person _p;
    _p.numTwo = ++num;
    return (_p);
}


