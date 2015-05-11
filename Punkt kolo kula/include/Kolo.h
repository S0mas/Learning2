#ifndef KOLO_H
#define KOLO_H
#include "Punkt.h"
using namespace std;

class Kolo :public Punkt
{
    public:
        Kolo(string = "Kolo", float = 1, string = "A", float = 0, float = 0);
        void show();
        virtual ~Kolo();
    protected:
    float r;
    private:
    string name;

};

#endif // KOLO_H
