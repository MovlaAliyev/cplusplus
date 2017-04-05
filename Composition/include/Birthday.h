#ifndef BIRTHDAY_H
#define BIRTHDAY_H


class Birthday
{
    public:
        Birthday(int m, int d, int y);
        virtual ~Birthday();
        void printDate();

    protected:

    private:
        int month;
        int year;
        int day;
};

#endif // BIRTHDAY_H
