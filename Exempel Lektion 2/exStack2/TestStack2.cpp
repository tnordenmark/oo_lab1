
/* File:        TestStack2.cpp
   Purpose:     Test program for class Stack, ver. 2
*/

#include <iostream>
#include "Stack2.h"

using namespace std;

void popAndPrintAll(Stack &s) {
    char c;
    while(!s.empty( )) {
            c = s.top( ); // get top value..
            cout << c << ' ';  // print it..
            s.pop( ); // and pop it
    }
    cout << endl;
}

int main(int argc, char* argv[ ])
{
        Stack myStack; // Create a stack

        // Push some chars on myStack
        for(char ch = 'F'; ch >='A'; ch--)
           myStack.push(ch);

        Stack myNewStack(myStack);

        popAndPrintAll(myStack);
        popAndPrintAll(myNewStack);

        // Push some chars on myNewStack
        for(char ch = '9'; ch >='1'; ch--)
           myNewStack.push(ch);

        // Copy myNewStack to myStack
        myStack = myNewStack;
        // Push another value on myNewStack
        myNewStack.push('0');

        // Get all values from both stacks
        popAndPrintAll(myStack);
        popAndPrintAll(myNewStack);

        system("pause");
        return 0;
}

