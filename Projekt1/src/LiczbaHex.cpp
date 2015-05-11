#include "LiczbaHex.h"
using namespace std;

string LiczbaHex::dodawanie(string s1, string s2)
{
char c1, c2, c3; int i1, i2, i3, i4, i5, ic, p=0, x, d=0, q = 0; string s3="";
do
{
++q;
i1=s1.size(); i2=s2.size();
if (i1>=i2) ic = i1;
else ic=i2;

if((i1-q)<0) c1='0';
if((i1-q)>=0) c1=s1[i1-q];
if((i2-q)<0) c2='0';
if((i2-q)>=0) c2=s2[i2-q];
while(c1!=t[p])
{
p++;
}
i4=p; p=0;
while(c2!=t[p])
{
p++;
}
i5=p; p=0;
x=i4+i5;
i3=(x+d)%16;
if((x+d)>15) d=1;
else d=0;
c3=t[i3];
s3= c3 + s3;
}while(ic-q>0);
if (d == 1) s3= "1" +s3;
s3="0" +s3;
return s3;
}

