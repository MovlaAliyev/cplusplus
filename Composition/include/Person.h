#ifndef PERSON_H
#define PERSON_H

#include <string>
#include "Birthday.h"

using namespace std;

class Person
{
    public:
        Person(string n, Birthday bd);
        virtual ~Person();
        void printInfo();
    protected:

    private:
        string name;
        Birthday dateOfBirth;
};

#endif // PERSON_H
