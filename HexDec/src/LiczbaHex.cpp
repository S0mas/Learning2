#include "LiczbaHex.h"
void LiczbaHex::declareList()
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
string LiczbaHex::sDecToHex(int i_number)
{
    int i_integral, i_rest;
    bool b_negative = false;
    string s_result;
    if (i_number < 0)
    {
    i_number = i_number*(-1);
    b_negative = true;
    }
    i_integral = (int)i_number/16;
    i_rest = i_number%16;
    s_result = s_sign[i_rest];
    while (i_integral != 0)
    {
    i_rest = i_integral%16;
    i_integral = (int)i_integral/16;
    s_result = s_sign[i_rest]+s_result;
    }
    if (b_negative)
    {
    s_result = "1" + s_result;
    }
    else
    {
    s_result = "0" + s_result;
    }
    return s_result;
}//ctor
int LiczbaHex::iHexToDec(string s_number)
{
    int i_result = 0, i_size, i_number, i_power=0, i_i2=0;
    char c_getSign;
    i_size = s_number.size();
    for(int i_i1 = i_size - 1; i_i1 >= 0 ; i_i1--)
    {
        c_getSign = s_number[i_i1];
        i_i2=0;
        while(c_getSign != s_sign[i_i2])
        {
            i_i2++;
        }
        i_number = i_i2;
        i_result = i_result + i_number * pow(16,i_power);
        i_power++;
    }
    return i_result;
}

