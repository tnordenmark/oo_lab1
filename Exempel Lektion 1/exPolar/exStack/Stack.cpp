/*
    File:       Stack.cpp
    Purpose:    implementation of class Stack
    Date:       Sept 2007 / Örjan Sterner
*/


#include "Stack.h"


    Stack::~Stack( ) {
        while(topNode !=NULL)
            pop();
    }


    void Stack::pop( ) {
        Node *p = topNode;
        topNode = topNode->getNext( );
        delete p; // destroy the Node
    }


    void Stack::push(Type v) {
        // create a new Node...
        Node *p = new Node(v);
        // ..and link it to the others
        if(empty())
            p->setNext(NULL);
        else
            p->setNext(topNode);

        topNode = p;
     }