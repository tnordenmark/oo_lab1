/*  File:	Complex.cpp
    Topic:	implementation of class Complex
    Date:	2001-09-22 /orjste   */


#include "Complex.h"


Complex::Complex(float a, float b) // constructor
:r(a),i(b)
{
#ifdef MY_DEBUG
    cout << "con: " << *this << endl;
#endif
}

Complex::Complex(const Complex &c)   // copy constructor
:r(c.r), i(c.i)
{
#ifdef MY_DEBUG
     cout << "copy con: " << *this << endl;
#endif
}


Complex::~Complex()
{
#ifdef MY_DEBUG
    cout << "dest: " << *this << endl;
#endif
}


Complex& Complex::operator=(const Complex &c) { // assignment op.
    r = c.r;
    i = c.i;
#ifdef MY_DEBUG
    cout << "assignment: " << *this << endl;
#endif
    return *this;
}    

void Complex::printOn(ostream &strm) const {
    strm << r;
    if(i>=0) strm << '+' << i << 'i';
    else strm << i << 'i';
    strm << ' ';
}

void Complex::readFrom(istream &strm) {
    strm >> r >> i;
}


Complex Complex::add(const Complex &a) const  {
    Complex tmp;
    tmp.r = r + a.r;
    tmp.i = i + a.i;
    return tmp;
}

Complex Complex::sub(const Complex &a) const {
    Complex tmp;
    tmp.r = r - a.r;
    tmp.i = i - a.i;
    return tmp;
}

Complex Complex::mul(const Complex &a) const {
    Complex tmp;
    tmp.r = (r * a.r) - (i * a.i);
    tmp.i = (r * a.i) + (i*a.r);
    return tmp;
}

Complex Complex::div(const Complex &a) const {
    Complex tmp;
    float denominator = a.r*a.r + a.i*a.i;
    tmp.r = (r*a.r + i*a.i)/denominator;
    tmp.i = (i*a.r-r*a.i)/denominator;
    return tmp;
}

bool Complex::isEqual(const Complex &a) const {
    return (r==a.r) && (i==a.i);
}


bool Complex::isNotEqual(const Complex &a) const {
    return (r!=a.r) || (i!=a.i);
}


// operators

Complex operator+(const Complex &c1, const Complex &c2) {
    return c1.add(c2);
}


Complex operator-(const Complex &c1, const Complex &c2) {
    return c1.sub(c2);
}


Complex operator*(const Complex &c1, const Complex &c2) {
    return c1.mul(c2);
}


Complex operator/(const Complex &c1, const Complex &c2) {
    return c1.div(c2);
}


bool operator==(const Complex &c1, const Complex &c2) {
    return c1.isEqual(c2);
}


bool operator!=(const Complex &c1, const Complex &c2) {
    return c1.isNotEqual(c2);
}


ostream& operator<<(ostream &os, const Complex &c) { // insertion
    c.printOn(os);
    return os;
}

istream& operator>>(istream &is, Complex &c) { // extraction
    c.readFrom(is);
    return is;
}
