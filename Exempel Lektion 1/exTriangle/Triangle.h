/*	File:	Triangle.h
	Topic:	Definition of class Triangle
*/

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Point.h"
#include <iostream>

using std::ostream;

class Triangle {
private:
    Point p1,p2,p3;
public:
    /* Constructors */
    Triangle(Point a, Point b, Point c);

   /* Getters & setters */
    void move(Point);
    void move(float,float);

    Point tp() const;  // Tyngdpunkt - Center of gravity

   /* Facilitators */
    void printOn(ostream &os=cout) const;
};

#endif

