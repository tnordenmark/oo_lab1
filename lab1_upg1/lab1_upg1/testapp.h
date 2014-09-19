/*
* Filnamn: testapp.h
* Labb nr: Labb 1 uppgift 1
* Studentens namn: Thomas Nordenmark
*/

#ifndef TESTAPP_H
#define TESTAPP_H

#include <memory>
#include "queue.h"
using namespace std;

class TestApp
{
    private:
        unique_ptr<Queue> pQueue; // Smart pointer object for Queue

        // Menu options
        void createQueue(); // Create new queue of given size
        void enqueue(); // Add elements to queue
        void dequeue(); // Remove elements from queue
        void queueStatus() const; // Check queue status
        void isEmpty() const; // Is queue empty?
        void isFull() const; // Is queue full?
        void nrElements() const; // Nr of elements in queue
        void queueCapacity() const; // Max number of elements queue can hold
        void printQueue() const;

    public:
        TestApp();
        void run();
};

#endif // TESTAPP_H
