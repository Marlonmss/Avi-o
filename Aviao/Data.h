#ifndef DATE_H
#define DATE_H

class Date
{
    public:
        Date(int = 1, int = 1, int = 1990);
        void print() const;
    private:
        int dia;
        int mes;
        int ano;
};

#endif