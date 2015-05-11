#ifndef PUNKT_H
#define PUNKT_H
#include "Includy.h"

using namespace std;

class Punkt
{
    public:
        void show();
        Punkt(string ="A", float=0, float=0);
        virtual ~Punkt();
    protected:
    private:
    float x,y;
    string name;
};

#endif // PUNKT_H
