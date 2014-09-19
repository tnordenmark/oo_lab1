/*
    File:       Stack2.h
    Purpose:    Class definition for a stack
                implemented as a dynamically linked list
                version 2

    Added features:
        The assignment operator and the copy constructor
        both perform a correct deep copy of the stack.

*/

#ifndef STACK2H
#define STACK2H

class Stack; // Forward declaration

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

	int getValue() const {
        return value;
    }

}; // class Node


class Stack {
private:
    Node *topNode;  // Points to the top Node

public:
    // Constructor
	Stack() :topNode(nullptr) { }

    Stack(const Stack &);

    // Destructor
    ~Stack( );

    // Operations
	bool empty() const { return topNode == nullptr; }
	int top() const { return topNode->getValue(); }
    void pop( );
	void push(int v);

    // Operators
    Stack & operator=(const Stack &); 	// Assignment
    bool operator==(const Stack &) const; // Equality
 };  // class Stack


#endif