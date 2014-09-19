/*
* Filnamn: queue.cpp
* Labb nr: Labb 1 uppgift 1
* Studentens namn: Thomas Nordenmark
*/

#include <iostream>
#include "queue.h"
using namespace std;

//------------------------------------------------------------------------------
// Overloaded default constructor
//------------------------------------------------------------------------------
// Task     :
// In data  :
// Out data :
//------------------------------------------------------------------------------
Queue::Queue(int n)
{
    pArray.reset(new Type[n]); // Create array dynamically
    head = -1; // Fron of queue
    tail = -1; // Back of queue
    nElem = 0; // No. elements in queue
    maxElem = n; // Maximum capacity (array size)
}

//------------------------------------------------------------------------------
// Destructor
//------------------------------------------------------------------------------
// Task     :
// In data  :
// Out data :
//------------------------------------------------------------------------------
Queue::~Queue()
{

}

//------------------------------------------------------------------------------
// enqueue
//------------------------------------------------------------------------------
// Task     : Add element last in queue
// In data  : elem (Type), the element to be added to the queue
// Out data :
//------------------------------------------------------------------------------
void Queue::enqueue(Type elem)
{
    // First element in queue
    if(head == -1 && tail == -1)
        head = 0, tail = 0;
    // If tail reached the end of the array then set tail to the beginning
    else if(tail == maxElem-1)
        tail = 0;
    else
    {
        // Move tail forward
        tail++;
    }

    // Update the array and increase no. elements
    pArray[tail] = elem;
    nElem++;
}

//------------------------------------------------------------------------------
// dequeue
//------------------------------------------------------------------------------
// Task     : Remove element first in queue
// In data  : &elem (Type), the last element removed from the queue
// Out data :
//------------------------------------------------------------------------------
void Queue::dequeue(Type &elem)
{
    // Store element about to be deleted
    elem = pArray[head];

    // If there is only on element in the queue
    if(head == tail)
        head = -1, tail = -1;
    // If head has reached the end of the array then set head to the beginning
    else if(head == maxElem -1)
        head = 0;
    else
    {
        // Move head forward and decrease no. elements
        head++;
        nElem--;
    }
}

//------------------------------------------------------------------------------
// length
//------------------------------------------------------------------------------
// Task     : Get number of elements in queue
// In data  :
// Out data : nElem (int), nr. elements currently in queue
//------------------------------------------------------------------------------
int Queue::length() const
{
    return nElem;
}

//------------------------------------------------------------------------------
// full
//------------------------------------------------------------------------------
// Task     : Check if queue is full
// In data  :
// Out data : true if full, false if not full
//------------------------------------------------------------------------------
bool Queue::full() const
{
    if((head == 0 && tail == maxElem -1) || (head == tail +1))
        return true;

    return false;
}

//------------------------------------------------------------------------------
// empty
//------------------------------------------------------------------------------
// Task     : Check if queue is empty
// In data  :
// Out data : true if empty, false if not empty
//------------------------------------------------------------------------------
bool Queue::empty() const
{
    if(head == -1)
        return true;

    return false;
}

//------------------------------------------------------------------------------
// capacity
//------------------------------------------------------------------------------
// Task     : Check the maximum capacity of the queue
// In data  :
// Out data : maxElem (int), maximum capacity of the queue
//------------------------------------------------------------------------------
int Queue::capacity() const
{
    return maxElem;
}

//------------------------------------------------------------------------------
// reveal
//------------------------------------------------------------------------------
// Task     : Helper function to print contents of queue array
// In data  :
// Out data :
//------------------------------------------------------------------------------
void Queue::reveal() const
{
    int i;

    if(head > tail)
    {
        for(i = 0; i <= tail; i++)
            cout << endl << "pArray[" << i << "] = " << pArray[i];
        for(i = head; i <= maxElem -1; i++)
            cout << endl << "pArray[" << i << "] = " << pArray[i];
    }
    else
        for(i = head; i <= tail; i++)
            cout << endl << "pArray[" << i << "] = " << pArray[i];
}
