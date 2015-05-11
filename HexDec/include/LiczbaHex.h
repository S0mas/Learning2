#ifndef LICZBAHEX_H
#define LICZBAHEX_H
#include <string>
#include <iostream>
#include <math.h>
using namespace std;

class LiczbaHex
{
public:
    char s_sign[16];
    void declareList();
    string sDecToHex(int i_number);
    int iHexToDec(string s_number);
    LiczbaHex(int i_number)
    {
    s_sign[0] = 'F';
    s_sign[1] = 'E';
    s_sign[2] = 'D';
    s_sign[3] = 'C';
    s_sign[4] = 'B';
    s_sign[5] = 'A';
    s_sign[6] = '9';
    s_sign[7] = '8';
    s_sign[8] = '7';
    s_sign[9] = '6';
    s_sign[10] = '5';
    s_sign[11] = '4';
    s_sign[12] = '3';
    s_sign[13] = '2';
    s_sign[14] = '1';
    s_sign[15] = '0';
    }
    LiczbaHex(unsigned int i_number)
    {
    s_sign[0] = '0';
    s_sign[1] = '1';
    s_sign[2] = '2';
    s_sign[3] = '3';
    s_sign[4] = '4';
    s_sign[5] = '5';
    s_sign[6] = '6';
    s_sign[7] = '7';
    s_sign[8] = '8';
    s_sign[9] = '9';
    s_sign[10] = 'A';
    s_sign[11] = 'B';
    s_sign[12] = 'C';
    s_sign[13] = 'D';
    s_sign[14] = 'E';
    s_sign[15] = 'F';
    }
    protected:
    private:
};

#endif // LICZBAHEX_H
