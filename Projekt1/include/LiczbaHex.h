#ifndef LICZBAHEX_H
#define LICZBAHEX_H
#include <string>
using namespace std;


class LiczbaHex
{
    char t[16];
    public:
    string dodawanie(string s1, string s2);
    LiczbaHex(int a)
    {
    t[0] = '0';
    t[1] = '1';
    t[2] = '2';
    t[3] = '3';
    t[4] = '4';
    t[5] = '5';
    t[6] = '6';
    t[7] = '7';
    t[8] = '8';
    t[9] = '9';
    t[10] = 'A';
    t[11] = 'B';
    t[12] = 'C';
    t[13] = 'D';
    t[14] = 'E';
    t[15] = 'F';
    }
};

#endif // LICZBAHEX_H
