/*
    File:       Stack.cpp
    Purpose:    implementation of class Stack
*/

#include "Stack.h"

    Stack::~Stack( ) {
        while(topNode !=nullptr)
            pop();
    }

    void Stack::pop( ) {
        Node *p = topNode;
        topNode = topNode->getNext( );
        delete p; // destroy the Node
    }


    void Stack::push(int v) {
        // create a new Node...
        Node *p = new Node(v);
        // ..and link it to the others
        if(empty())
			p->setNext(nullptr);
        else
            p->setNext(topNode);

        topNode = p;
     }