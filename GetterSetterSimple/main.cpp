#include <iostream>
#include "Person.h"

using namespace std;

int main(){
    Person p;

    p.setAge(22);
    cout << "Age is: " <<  p.getAge() << endl;

    return 0;
}
