#include "Node.hpp"

class LinkedList
{
private:
    Node* head;
    Node* tail;

protected:
    Node* getNodeAtIndex(int index);
    int count;

public:
    LinkedList();
    void display();
    void addEnd(int value);
    int removeEnd();
    void addFront(int value);
    int removeFront();
    int removeAtIndex(int index);
    void addAtIndex(int value, int index);
    void mergeSort(LinkedList ll, int begin, int end);
    void merge(LinkedList ll, int begin1, int end1, int begin2, int end2);

};