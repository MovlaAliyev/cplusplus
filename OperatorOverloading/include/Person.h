#ifndef PERSON_H
#define PERSON_H


class Person
{
    public:
        int num;
        int numTwo;
        Person();
        Person(int);
        Person operator + (Person);
        Person operator * (Person);
        Person operator / (Person);
        Person operator ++ ();
        Person operator ++ (int);
        virtual ~Person();

    protected:

    private:
};

#endif // PERSON_H
