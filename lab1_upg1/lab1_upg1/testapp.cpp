/*
* Filnamn: testapp.cpp
* Labb nr: Labb 1 uppgift 1
* Studentens namn: Thomas Nordenmark
*/

#include <iostream>
#include <limits>
#include "testapp.h"
#include "menu.h"

//------------------------------------------------------------------------------
// createQueue
//------------------------------------------------------------------------------
// Task     : Create a queue object of a given size
// In data  :
// Out data :
//------------------------------------------------------------------------------
void TestApp::createQueue()
{
    // Store queue size
    int sizeOfQueue = 0;

    // Ask for user input
    cout << "Input size of queue: ";
    cin >> sizeOfQueue;

    // Reset old queue object and create a new one
    pQueue.reset(new Queue(sizeOfQueue));
}

//------------------------------------------------------------------------------
// enqueue
//------------------------------------------------------------------------------
// Task     : Add elements to the end of the queue
// In data  :
// Out data :
//------------------------------------------------------------------------------
void TestApp::enqueue()
{
    // Check whether queue got room or not
    if(!pQueue->full())
    {
        int elem;

        // Ask for user input
        cout << "Input element (int) to be added to the queue: ";
        cin >> elem;

        // Add element to the end of the queue
        pQueue->enqueue(elem);
    }
    else
        cout << "Queue is full." << endl;
}

//------------------------------------------------------------------------------
// dequeue
//------------------------------------------------------------------------------
// Task     : Remove elements from the beginning of the queue
// In data  :
// Out data :
//------------------------------------------------------------------------------
void TestApp::dequeue()
{
    // Store last deleted value
    int elem;

    // Check if queue is non-empty
    if(!pQueue->empty())
    {
        pQueue->dequeue(elem);
        cout << "Element of value: " << elem << " was deleted." << endl << endl;
    }
    else
        cout << "Queue is empty." << endl << endl;
}

//------------------------------------------------------------------------------
// queueStatus
//------------------------------------------------------------------------------
// Task     : Check if queue is empty, full or contains some elements
// In data  :
// Out data :
//------------------------------------------------------------------------------
void TestApp::queueStatus() const
{
    if(pQueue->full())
        cout << "Queue is full." << endl << endl;
    else if(pQueue->empty())
        cout << "Queue is empty" << endl << endl;
    else
        cout << "Queue contains " << pQueue->length() << " elements." << endl << endl;
}

//------------------------------------------------------------------------------
// isEmpty
//------------------------------------------------------------------------------
// Task     : Check whether queue is empty or not
// In data  :
// Out data :
//------------------------------------------------------------------------------
void TestApp::isEmpty() const
{
    if(pQueue->empty())
        cout << "Queue is empty." << endl << endl;
    else
        cout << "Queue is not empty." << endl << endl;
}

//------------------------------------------------------------------------------
// isFull
//------------------------------------------------------------------------------
// Task     : Check whether queue is full or not
// In data  :
// Out data :
//------------------------------------------------------------------------------
void TestApp::isFull() const
{
    if(pQueue->full())
        cout << "Queue is full." << endl << endl;
    else
        cout << "Queue is not full." << endl << endl;
}

//------------------------------------------------------------------------------
// nrElements
//------------------------------------------------------------------------------
// Task     : Print no. elements in queue
// In data  :
// Out data :
//------------------------------------------------------------------------------
void TestApp::nrElements() const
{
    cout << "Number of elements in queue: " << pQueue->length() << endl << endl;
}

//------------------------------------------------------------------------------
// queueCapacity
//------------------------------------------------------------------------------
// Task     : Print maximum capacity of queue
// In data  :
// Out data :
//------------------------------------------------------------------------------
void TestApp::queueCapacity() const
{
    cout << "Queue maximum capacity: " << pQueue->capacity() << endl << endl;
}

//------------------------------------------------------------------------------
// printQueue
//------------------------------------------------------------------------------
// Task     : Print contents of queue
// In data  :
// Out data :
//------------------------------------------------------------------------------
void TestApp::printQueue() const
{
    if(!pQueue->empty())
    {
        pQueue->reveal();
        cout << endl << endl;
    }
    else
        cout << "Queue is empty." << endl << endl;
}

//------------------------------------------------------------------------------
// TestApp
//------------------------------------------------------------------------------
// Task     : Default constructor
// In data  :
// Out data :
//------------------------------------------------------------------------------
TestApp::TestApp()
{

}

//------------------------------------------------------------------------------
// run
//------------------------------------------------------------------------------
// Task     : run the application and print the main menu
// In data  :
// Out data :
//------------------------------------------------------------------------------
void TestApp::run()
{
    // Create menu object
    Menu mainMenu;

    // Menu counter
    int menumax = 0;

    // Static bool to keep track of menu option status
    static bool ranOpen = true;

    // If the menu is created for the first time§
    if(ranOpen)
    {
        mainMenu.addItem("Create queue of given size", true); // 1
        menumax++;
        mainMenu.addItem("Add element", false); // 2
        menumax++;
        mainMenu.addItem("Remove element", false); // 3
        menumax++;
        mainMenu.addItem("Queue status (full/empty?)", false); // 4
        menumax++;
        mainMenu.addItem("Print no. elements in queue", false); // 5
        menumax++;
        mainMenu.addItem("Print queue maximum size", false); // 6
        menumax++;
        mainMenu.addItem("Print queue contents", false); // 7
        menumax++;
        mainMenu.addItem("Quit...", true); // 8
        menumax++;
    }
    // If the Create queue function has been executed at least once
    else
    {
        mainMenu.addItem("Create queue of given size", true); // 1
        menumax++;
        mainMenu.addItem("Add element", true); // 2
        menumax++;
        mainMenu.addItem("Remove element", true); // 3
        menumax++;
        mainMenu.addItem("Queue status (full/empty?)", true); // 4
        menumax++;
        mainMenu.addItem("Show no. elements in queue", true); // 5
        menumax++;
        mainMenu.addItem("Print queue maximum size", true); // 6
        menumax++;
        mainMenu.addItem("Print queue contents", false); // 7
        menumax++;
        mainMenu.addItem("Quit...", true); // 8
        menumax++;
    }

    // Print menu again?
    bool again = true;

    // Main menu loop
    do
    {
        // Print menu options
        mainMenu.printMenuItems();

        // Ask for user input
        switch(mainMenu.getMenuChoice(menumax))
        {
            // Open
            case 1:
                // If option is flagged enabled
                if(mainMenu.getMenuvec()[0].getEnabled())
                {
                    // Call function
                    createQueue();
                    // Set ranOpen to false to keep other menu options enabled
                    // if you visist other (hypotethical) menus
                    ranOpen = false;
                    // Set disabled menu options to enabled
                    mainMenu.getMenuvec()[1].setEnabled(true);
                    mainMenu.getMenuvec()[2].setEnabled(true);
                    mainMenu.getMenuvec()[3].setEnabled(true);
                    mainMenu.getMenuvec()[4].setEnabled(true);
                    mainMenu.getMenuvec()[5].setEnabled(true);
                    mainMenu.getMenuvec()[6].setEnabled(true);
                    mainMenu.getMenuvec()[7].setEnabled(true);
                }
                // Error if options is disabled
                else
                    cout << "Create queue is disabled..." << endl;
                break;
            case 2:
                if(mainMenu.getMenuvec()[1].getEnabled())
                    enqueue();
                else
                    cout << "Add element is disabled..." << endl;
                break;
            case 3:
                if(mainMenu.getMenuvec()[2].getEnabled())
                {
                    dequeue();
                }
                else
                    cout << "Remove element is disabled..." << endl;
                break;
            case 4:
                if(mainMenu.getMenuvec()[3].getEnabled())
                    queueStatus();
                else
                    cout << "Queue status is disabled..." << endl;
                break;
            case 5:
                if(mainMenu.getMenuvec()[4].getEnabled())
                    nrElements();
                else
                    cout << "Print no. elements is disabled..." << endl;
                break;
            case 6:
                if(mainMenu.getMenuvec()[5].getEnabled())
                    queueCapacity();
                else
                    cout << "Print maximum size is disabled..." << endl;
                break;
            case 7:
                if(mainMenu.getMenuvec()[6].getEnabled())
                    printQueue();
                else
                    cout << "Print queue contents is disabled..." << endl;
                break;
            case 8:
                if(mainMenu.getMenuvec()[7].getEnabled())
                {
                    cout << "Exiting program..." << endl;
                    again = false;
                }
                else
                    cout << "Quit is disabled..." << endl;
                break;
        }
    }while(again); // Loop menu as long as bool again is not false
}
