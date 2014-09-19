/*	File:	TestTriangle.cpp
	Topic:	Test of class Triangle
*/

#include "Triangle.h"
using namespace std;

int main() {

    Triangle t1( Point(10,-10), Point(0,20), Point(50,50));

    t1.printOn();  cout << endl;

    Point tp = t1.tp();
    cout << "TP=";
    tp.printOn();
    cout << endl;

    t1.move(-5,-10);
   //t1.move(Point(-5,-10));
    t1.printOn();   cout << endl;
    tp  = t1.tp();
    cout << "TP=";
    tp.printOn();
    cout << endl;
    
    return 0;
}

