#include "quickqueue.h"

int main() {
    //First, create queue with **int** type
    QuickQueue<int> queue1, queue2;

    cout << "\nAdding five people to queue...";
    //Second, add 5 elements to queue
    queue1.Push(1);
    queue1.Push(2);
    queue1.Push(3);
    queue1.Push(4);
    queue1.Push(5);

    //Deep Copy Assignment Operator Overload
    queue2 = queue1;

    //Deep Copy Constructor
    QuickQueue<int> queue3 = queue1;


    cout << endl << "Q1 Size (int): " << queue1.getSize();
    cout << endl << "Q2 Size (int): " << queue2.getSize();
    cout << endl << "Q3 Size (int): " << queue3.getSize() << endl;

    //Display Q1
    cout << "Q1 (int): " << endl;
    int* nextInt = queue1.Pop();
    int counter = 0;

    while(nextInt != nullptr) {
        cout << "[" << counter++ << "]:"  << *nextInt <<" ";
        nextInt = queue1.Pop();
    }

    cout << "\nQ2 (int): " << endl;
    nextInt = queue2.Pop();
    counter = 0;

    while(nextInt != nullptr)
    {
        cout << "[" << counter++ << "]:" << *nextInt <<" ";
        nextInt = queue2.Pop();
    }

    cout << "\nQ3 (int): " << endl;
    nextInt = queue3.Pop();
    counter = 0;

    while(nextInt != nullptr)
    {
        cout << "[" << counter++ << "]:" << *nextInt << " ";
        nextInt = queue3.Pop();
    }

    cout << endl << "Q1 Size (int): " << queue1.getSize();
    cout << endl << "Q2 Size (int): " << queue2.getSize();
    cout << endl << "Q3 Size (int): " << queue3.getSize();

    //First, create queue with **int** type
    QuickQueue<double> queue4, queue5;

    cout << "\nAdding five people to queue...";
    //Second, add 5 elements to queue
    queue4.Push(1);
    queue4.Push(2);
    queue4.Push(3);
    queue4.Push(4);
    queue4.Push(5);

    //Deep Copy Assignment Operator Overload
    queue5 = queue4;

    //Deep Copy Constructor
    QuickQueue<double> queue6 = queue4;


    cout << endl << "Q4 Size (double): " << queue4.getSize();
    cout << endl << "Q5 Size (double): " << queue5.getSize();
    cout << endl << "Q6 Size (double): " << queue6.getSize() << endl;

    //Display Q1
    cout << "Q1 (double): " << endl;
    double* nextDouble = queue4.Pop();
    counter = 0;

    while(nextDouble != nullptr) {
        cout << "[" << counter++ << "]:"  << *nextDouble <<" ";
        nextDouble = queue4.Pop();
    }

    cout << "\nQ2 (double): " << endl;
    nextDouble = queue5.Pop();
    counter = 0;

    while(nextDouble != nullptr)
    {
        cout << "[" << counter++ << "]:" << *nextDouble <<" ";
        nextDouble = queue5.Pop();
    }

    cout << "\nQ3 (double): " << endl;
    nextDouble = queue6.Pop();
    counter = 0;

    while(nextDouble != nullptr)
    {
        cout << "[" << counter++ << "]:" << *nextDouble << " ";
        nextDouble = queue6.Pop();
    }

    cout << endl << "Q1 Size (double): " << queue4.getSize();
    cout << endl << "Q2 Size (double): " << queue5.getSize();
    cout << endl << "Q3 Size (double): " << queue6.getSize();


}
