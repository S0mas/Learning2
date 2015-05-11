#include "Kolo.h"

using namespace std;
Kolo::Kolo(string nk, float pr, string np, float dx, float dy)
:Punkt(np,dx,dy)
{
    name = nk;
    r = pr;
}
void Kolo::show()
{
    cout<<"Nazwa kola: "<<name<<endl;
    cout<<"Srodek : ";
    Punkt::show();
    cout<<"Promien : "<<r<<endl;
    cout<<"Pole : "<<M_PI*r*r<<endl;
}
Kolo::~Kolo()
{
    cout<<"DestruktorKola"<<endl;
}
