/*  File:       Complex.h
    Topic:    definition of class Complex
    Date:       2001-09-22 /orjste   */

#ifndef ComplexH
#define ComplexH

#include <iostream>

// Activate for debug
//#define MY_DEBUG

using namespace std;

class Complex {
    float r, i;     // private data members: real-
                    // and imaginary part
public:
    // constructors/destructor
    Complex(float a=0, float b=0); // constructor

    Complex(const Complex &); // copy constructor

    ~Complex(); // destructor

    // Getters
    float re() const {return r;}
    float im() const {return i;}

    //
    Complex add(const Complex &) const;  // +
    Complex sub(const Complex &) const;  // -
    Complex mul(const Complex &) const;  // *
    Complex div(const Complex &) const;  // /

    // facilitators
    void printOn(ostream &strm=cout) const;  // insert in strm
    void readFrom(istream &strm=cin); // extract from strm

    bool isEqual(const Complex &) const ;  // = =
    bool isNotEqual(const Complex &) const; // !=

    // operators
    Complex& operator=(const Complex &); // assignment
};

    // overloaded operators (NB not members!)

    Complex operator+(const Complex &c1, const Complex &c2);
    Complex operator-(const Complex &c1, const Complex &c2);
    Complex operator*(const Complex &c1, const Complex &c2);
    Complex operator/(const Complex &c1, const Complex &c2);

    bool operator==(const Complex &c1, const Complex &c2);
    bool operator!=(const Complex &c1, const Complex &c2);

    ostream& operator<<(ostream &, const Complex&); // insertion
    istream& operator>>(istream &, Complex&); // extraction

#endif
