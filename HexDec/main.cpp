#include <iostream>
#include <string>
#include "LiczbaHex.h"
using namespace std;

int main()
{
    LiczbaHex calculate(15);
    calculate.declareList();
    cout<<calculate.sDecToHex(44870)<<endl;
    cout<<calculate.iHexToDec("C52");//
    return 0; // Konwerter HexToDec i DecToHec w tej chwili zamienia tylko liczby dodatnie.
}

