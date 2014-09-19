/* File:   Polar.h
   Topic:  Definition of class Polar:
           Complex number in a polar form
   Date:   2001-09-23 /orjste              
*/


#ifndef PolarH
#define PolarH


#include<iostream>
#include"Complex.h"

using namespace std;


class Polar {

private:

  float ang;            // angle in degrees
  float len;            // length of vector


public:
  // constructor: angle and length
  Polar(float a=0 , float l=0);

 // constructor: initialize from a Complex,
 // also for implicit conversion Complex => Polar

  Polar(const Complex &c);

  // Getters
  float length() const { return len;}
  float angle()  const { return ang;}
  

  // Faciliators

  void printOn(ostream &strm=cout) const;
  void readFrom(istream &strm=cin);


  // Conversion operator
  // implicit conversion Polar => Complex
  
  operator Complex();

};


ostream& operator<<(ostream&, const Polar&);
istream& operator>>(istream&,Polar&);

#endif
