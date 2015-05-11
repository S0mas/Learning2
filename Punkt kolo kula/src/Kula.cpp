#include "Kula.h"

using namespace std;

Kula::Kula(string nkk, string nk, float pr, string np, float dx, float dy)
:Kolo(nk, pr, np, dx, dy)
{
    name = nkk;
}
void Kula::show()
{
float obj=M_PI*r*r*r*4/3;
cout<<"Nazwa kuli: "<<name<<endl;
cout<<"Na podstawie kola: ";Kolo::show();
cout<<"Objetosc kuli: "<<obj<<endl;
}
Kula::~Kula()
{
    cout<<"DestruktorKULI"<<endl;
}
