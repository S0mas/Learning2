#ifndef KULA_H
#define KULA_H
#include "Kolo.h"
using namespace std;


class Kula :public Kolo
{
    public:
        void show();
        Kula(string = "Kula", string = "Kolo", float = 1, string = "A", float = 0, float = 0);
        virtual ~Kula();
    protected:
    private:
    string name;
};

#endif // KULA_H
