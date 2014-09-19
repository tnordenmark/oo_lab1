/*
* Filnamn: queue.h
* Labb nr: Labb 1 uppgift 1
* Studentens namn: Thomas Nordenmark
*/

#ifndef QUEUE_H
#define QUEUE_H

#include <memory>

typedef int Type;
const int QSIZE = 10;

class Queue
{
    private:
        std::unique_ptr<Type[]> pArray; // Smart pointer object for array
        int head; // index in array for head
        int tail; // index in array for tail
        int nElem; // nr of items in queue
        int maxElem; // max capacity of queue

    public:
        Queue(int n = QSIZE); // n = max capacity of queue
        /* Pre:
        -
        Post: A Queue object with capacity for n data-
        items is created. */

        ~Queue();
        /* Pre:
        -
        Post: The Queue-pre object is destroyed */

        void enqueue(Type elem);
        /* Pre:
        The Queue has not reached its maximum capacity.
        Post: elem is inserted as the newest element in
        Queue. */

        void dequeue(Type &elem);
        /* Pre:
        The Queue is not empty.
        Post: elem contains the oldest element in Queue-
        pre and elem is not contained in Queue. */

        int length() const;
        /* Pre:
        -
        Post: Number of elements in Queue is returned. */

        bool full() const;
        /* Pre:
        -
        Post: If Queue has reached its maximum capacity
        true is returned, else false is returned. */

        bool empty() const;
        /* Pre:
        -
        Post: If Queue is empty true is returned,
        else false is returned. */

        int capacity() const;
        /* Pre:
        -
        Post: Maximal number of elements that the Queue can
        hold Queue is returned. */

        void reveal() const;
};

#endif // QUEUE_H
