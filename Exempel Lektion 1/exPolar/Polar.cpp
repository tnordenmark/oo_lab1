/* 
   File:        Polar.cpp
   Topic:       Implementation of class Polar:
                complex number in a polar form
   Date:        2001-09-23 /orjste              
*/


#include<math>
#include "Polar.h"

const float DEG2RAD = 4*atan(1.0f)/180;   // pi/180
const float RAD2DEG = 180/(4*atan(1.0f)); // 180/pi


Polar::Polar(float a, float l)
:ang(a), len(l)
{}


Polar::Polar(const Complex &c) {  // How to make a Polar

   float x = c.re();               // from a Complex2
   float y = c.im();
   len = sqrt(x*x + y*y);
   ang = RAD2DEG*atan(y/x);
}


void Polar::printOn(ostream &strm) const {

  strm << "ang=" << ang << " len=" << len;
}


void Polar::readFrom(istream &strm) {

  strm >> ang  >> len;
}

//How to use a Polar when a Complex is expected
Polar::operator Complex() {  

   float x,y;                 
   x = len * cos(ang*DEG2RAD);
   y = len * sin(ang*DEG2RAD);
   return Complex(x,y);
}


ostream& operator <<(ostream &ostr, const Polar &p) {

   p.printOn(ostr);
   return ostr;
}


istream& operator>>(istream &strm, Polar &p) {

   p.readFrom(strm);
   return strm;
}
