//Your implementation should be a template class called QuickQueue<T>
//Your template class must have two template functions:
//Enqueue - adds an element to the queue
//Dequeue - removes an element from the queue and returns it to the caller
//You MUST implement the internal storage of the queue as a double pointer of type T (you may NOT use an existing container template from the STL)
//You MUST implement the rule of three for QuickQueue
//You should include a driver file that creates two different queues of different types, the driver should also add and remove five items from each queue.
//You DO NOT need to implement a menu and instead you can just hardcode example values to show that your queue works.
#include <iostream>
using namespace std;

template<class T>
class QuickQueue
{
private:
    T** array;
    int capacity;
    int size;

public:

    //default constructor
    QuickQueue();

    //**RULE OF THREE**
    //Copy Constructor
    QuickQueue(const QuickQueue<T>& q);

    //Deep CopyAssignment Operator Overload
    QuickQueue<T>& operator=(const QuickQueue<T>& q);

    //Destructor
    ~QuickQueue();

    //PUSH (adding people to line)
    void Push(const T& p);

    //POP (kicking person out of line)
    T* Pop();

    int getSize() {
        return size;
    }

};

#include "quickqueue.hpp"
