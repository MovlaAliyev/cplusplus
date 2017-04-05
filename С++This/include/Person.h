#ifndef PERSON_H
#define PERSON_H


class Person
{
    public:
        Person(int a);
        virtual ~Person();
        void printAge();
    protected:

    private:
        int val;
};

#endif // PERSON_H
