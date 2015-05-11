#include "Punkt.h"

using namespace std;

void Punkt::show()
{
cout<<name<<" = ("<<x<<","<<y<<")"<<endl;
}
Punkt::Punkt(string n, float dx, float dy)
{
name=n;
x=dx;
y=dy;
}

Punkt::~Punkt()
{
    cout<<"DestroyPunkt"<<endl;
}
