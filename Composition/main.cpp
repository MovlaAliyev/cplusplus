#include <iostream>
#include "Birthday.h"
#include "Person.h"

using namespace std;

int main(){

    Birthday b(13,01,1994);

    Person p("Movla",b);

    p.printInfo();
    return 0;
}
