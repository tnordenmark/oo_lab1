/*
    File:       Stack.h
    Purpose:    Class definition for a stack
                implemented as dynamically linked list.
                Default copy constructor and assignment operator
                give shollow copy semantics.
    Date:       Sept 2007 / Örjan Sterner

    A stack is a container for objects of a specified type.
    Access to the objects on the stack is given according
    to the LIFO-principle.

    Operations on the stack:
    push    puts a new value on the top
    top     returns the top value
    pop     removes the top value
    empty   is the stack empty?

*/

#ifndef STACK_H
#define STACK_H

#include<cstdio>


typedef char Type;  // change this typedef for other types

class Stack; // Forward declaration of Stack, more to come...

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

    // Destructor
    ~Stack( );

    // Operations
    bool empty( ) const {return topNode==NULL;}

    Type top( ) const {return topNode->getValue( );}

    void pop( );

    void push(Type v);

 };  // class Stack


#endif
