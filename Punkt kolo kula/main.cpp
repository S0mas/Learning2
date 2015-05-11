#include "Kula.h"

using namespace std;

int main()
{
    Punkt k1("A", 2, 3);
    Kolo k2("K", 2, "B", 8, 9);
    Kula k3("S", "K2", 4, "C", 90, 76);
    k1.show();
    k2.show();
    k3.show();
    return 0;
}//ćwiczenie odnośnie działania dziedziczenia
