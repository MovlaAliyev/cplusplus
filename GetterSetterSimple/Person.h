#ifndef PERSON_H
#define PERSON_H

class Person{

    public:
        Person();
        virtual ~Person();

        void setAge(int age);
        int  getAge();
    protected:

    private:
        int age;

};

#endif // PERSON_H
