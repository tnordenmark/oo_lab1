/* 
   File:     TestPolar.cpp
   Topic:    Polar and Complex in cooperation
   Date:     2001-09-22 /orjste               
*/


#include <iostream>
#include "Polar.h"
#include "Complex.h"

using namespace std;

void print(Polar p)
{
   cout << "Complex number: " << p << endl;
};


int main(int argc, char* argv[])
{

   Polar p1(45,1.41421356); // (1+i)
   Complex c1(2,2);         // (2+2i)
   
   // Initialize a Polar with a Complex
   Polar p2(c1);
   cout << p2 << endl;  // ang=45 len=2.82843

   Polar p3(0,1);


   /* Use of Polar where Complex is expected, the same as
	       Complex c2 = 
	       operator+( operator+(c1, p1.operator Complex()), p3.operator Complex());
   */
	 
   Complex c2 = c1 + p1 + p3; // 2+2i + 1+i + 1
   cout << c2 << endl;  // 4+3i


   Complex c3(0.8660254,0.5); // (sqrt(3)/2 , 0.5)


   // Implicit conversion Complex => Polar using constructor Polar(Complex)
   print(c3);  // ang=30, len=1.0

   cin.get();
   return 0;
}

