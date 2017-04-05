#ifndef MEMBER_H
#define MEMBER_H


class Member
{
    public:
        Member(int a, int b);
        virtual ~Member();
        void print();

    protected:

    private:
        int firstVal;
        int secVal;
};

#endif // MEMBER_H
