/*	File:	Triangle.cpp
	Topic:	Implementation of class Triangle
            using Point
*/

#include "Triangle.h"

Triangle::Triangle(Point a, Point b, Point c)
: p1(a), p2(b), p3(c)
{}

Point Triangle::tp() const { // Returns center of gravity
    Point tmpPoint;

    tmpPoint.setX((p1.getX()+p2.getX()+p3.getX())/3.0f);  // f means interpret as float
    tmpPoint.setY((p1.getY()+p2.getY()+p3.getY())/3.0f);

    return tmpPoint;
}

void Triangle::move(Point p) {
    p1.move(p);
    p2.move(p);
    p3.move(p);
}

void Triangle::move(float x, float y) {
    p1.move(Point(x,y));
    p2.move(Point(x,y));
    p3.move(Point(x,y));
}

void Triangle::printOn(ostream &os) const  {
    os << "P1="; p1.printOn(os);
    os << " P2="; p2.printOn(os);
    os << " P3="; p3.printOn(os);
}

