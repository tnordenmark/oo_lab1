/*
    File:       Stack.h
    Purpose:    Class definition for a stack
                implemented as dynamically linked list.
                Default copy constructor and assignment operator
                give shallow copy semantics.

    A stack is a container for objects of a specified int.
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

class Stack; // Forward declaration of Stack, more to come...

/* This Stack is implemented as a linked list of
   Node-objects. The nodes are dynamically created
   and destroyed as the stack grows and shrink. */

class Node {

// Give Stack access to private members
friend class Stack;

private:
    Node *next;
    int value;

    // Constructor
    Node(const int &v)  // value
		:value(v), next(nullptr) { }

    // Getters & Setters
    void setNext(Node *np) {
        next = np;
    }

    Node* getNext( ) const {
        return next;
    }

    int getValue( ) const {
        return value;
    }
}; // class Node


class Stack {
private:
    Node *topNode;  // Points to the top Node
public:
    // Constructor
	Stack() :topNode(nullptr) { }

    // Destructor
    ~Stack( );

    // Operations
	bool empty() const { return topNode == nullptr; }
    int top( ) const {return topNode->getValue( );}
    void pop( );
    void push(int v);
 };  // class Stack

#endif
