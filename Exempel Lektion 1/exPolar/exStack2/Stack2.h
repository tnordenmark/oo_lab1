/*
    File:       Stack2.h
    Purpose:    Class definition for a stack
                implemented as a dynamically linked list
                version 2
    Date:       Sept 2007 / Örjan Sterner

    Added features:
        The assignment operator and the copy constructor
        both perform a correct deep copy of the stack.

    A stack is a container for objects of a specified type.
    Access to the objects on the stack is given according
    to the LIFO-principle.

    Operations on this stack:
    push    puts a new value on the top
    top     returns the top value
    pop     removes the top value
    empty   is the stack empty?

*/

#ifndef STACK2H
#define STACK2H

#include<cstdio>

typedef char Type;

class Stack; // Forward declaration

/* This Stack is implemented as a linked list of
   Node-objects. The nodes are dynamically created
   and destroyed as the stack grows and shrink. */

class Node {
// Give Stack access to private members
friend class Stack;
private:
    Node *next;
    Type value;

    // Constructor
    Node(const Type &v)  // value
    :value(v), next(NULL) { }

    // Getters & Setters
    void setNext(Node *np) {
        next = np;
    }

    Node* getNext( ) const {
        return next;
    }

    Type getValue( ) const {
        return value;
    }

}; // class Node


class Stack {
private:
    Node *topNode;  // Points to the top Node

public:
    // Constructor
    Stack( ):topNode(NULL) { }

    Stack(const Stack &);

    // Destructor
    ~Stack( );

    // Operations
    bool empty( ) const {return topNode==NULL;}

    Type top( ) const {return topNode->getValue( );}

    void pop( );

    void push(Type v);

    // Operators
    Stack & operator=(const Stack &); 	// Assignment

    bool operator==(const Stack &) const; // Equality

 };  // class Stack


#endif