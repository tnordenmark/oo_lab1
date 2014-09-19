/*
    File:       Stack2.cpp
    Purpose:    implementation of class Stack, version 2
    Date:       Sept 2007 / Örjan Sterner
*/


#include "Stack2.h"


// --- Copy constructor

    Stack::Stack(const Stack &source)
    :topNode(NULL)
    {
        if(source.empty())
            return;

        /* OK there is at least one value to copy,
           let's create a new Node, set topNode
           to point at it and copy the value from
           source stack */

        topNode = new Node(source.topNode->value);

        /* For each of the remaining Nodes in source, create
           a new Node, copy the value and link it as the last */

        // Get a pointer to the next Node in source
        Node *nextSourceNode = source.topNode->next;
        Node *lastNode = topNode; // Last in the new stack
        while(nextSourceNode != NULL) {
          // Create a new node and copy value from source
          lastNode->next = new Node(nextSourceNode->value);
          lastNode = lastNode->next; // Advance lastNode
          nextSourceNode = nextSourceNode->next;
        }
    }



// --- Destructor
    Stack::~Stack( ) {
        while(topNode !=NULL)
            pop();
    }


// --- Operations

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

// --- Assignment operator

    Stack & Stack::operator=(const Stack &source) {
        // Avoid assignment 'source = source'
        if(this == &source)   // Same object?
            return *this;     // We are finished!

        // Delete all nodes in this stack (target)
        while(topNode !=NULL)
            pop();
        topNode = NULL;

        if(source.empty())   // Empty source?
            return *this;    // We are finished !

        /* OK there is at least one value to copy,
           let's create a new Node, set topNode
           to point at it and copy the value from
           source stack */

        topNode = new Node(source.topNode->value);

        /* For each of the remaining Nodes in source, create
           a new Node, copy the value and link it as the last */

        // Get a pointer to the next Node in source
        Node *nextSourceNode = source.topNode->next;
        Node *lastNode = topNode; // Last in target

        while(nextSourceNode != NULL) {
          // Create a new node and copy value from source
          lastNode->next = new Node(nextSourceNode->value);
          lastNode = lastNode->next; // Advance lastNode in target
          nextSourceNode = nextSourceNode->next; // Advance in source
        }

        return *this;
}

