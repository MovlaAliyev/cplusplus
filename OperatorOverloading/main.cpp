#include <iostream>
#include "Person.h"

using namespace std;

int main(){

    Person pOne(20);
    Person pTwo(2);
    Person pThree;

    pThree.numTwo = 2+3;

    cout << pThree.numTwo << endl;

    pThree = pTwo + pOne;
    cout << pThree.numTwo << endl;

    pThree = pOne * pTwo;
    cout << pThree.numTwo << endl;

    pThree = pOne / pTwo;
    cout << pThree.numTwo << endl;


    pOne = ++pOne;
    cout << pOne.numTwo << endl;




    return 0;
}
