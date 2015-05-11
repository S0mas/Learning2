#include <iostream>
#include "LiczbaHex.h"
#include <string>
using namespace std;

int main()
{
LiczbaHex liczby(5);
string s1 = "B8095516A8FF1F5C", s2="234567890ABCDE";
cout<<liczby.dodawanie(s1, s2)<<endl;
s1 = "AA", s2="48A";
cout<<liczby.dodawanie(s1, s2)<<endl;
s1 = "AA5", s2="42EB";
cout<<liczby.dodawanie(s1, s2)<<endl;
s1 = "AAFE", s2="46AEC";
cout<<liczby.dodawanie(s1, s2)<<endl;
s1 = "BEF565", s2="BEFAE5";
cout<<liczby.dodawanie(s1, s2)<<endl;
s1 = "5", s2="15";
cout<<liczby.dodawanie(s1, s2)<<endl;
    return 0;
}//Dodawanie liczb Hexadecymalnych
