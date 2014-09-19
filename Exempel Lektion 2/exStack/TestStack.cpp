/*
    File:       TestStack.cpp
    Purpose:    Testprogram for class Stack
*/

#include "Stack.h"
#include<iostream>

using namespace std;

int main(int argc, char* argv[ ])
{

        Stack myStack; // Create a stack
        Stack stackCopy;

        // Push some chars
        myStack.push('D');
        myStack.push('C');
        myStack.push('B');
        myStack.push('A');

        stackCopy = myStack;
        char c;

        while(!myStack.empty( )) {
            c = myStack.top( ); // get top value...
            cout << c << ' ';  // print it...
            myStack.pop( ); // and pop it
        }

        cout << endl;
        // And now the copy...
        while(!stackCopy.empty( )) {
            c = stackCopy.top( ); // get top value...
            cout << c << ' ';  // print it...
            stackCopy.pop( ); // and pop it  BOOM!
        }

        return 0;
}
