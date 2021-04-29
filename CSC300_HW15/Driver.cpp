//#include "Card.hpp"
//#include "URL.hpp"
#include <iostream>
#include <string>
//#include "myFunctions.hpp"
//#include "Stack.hpp"
#include <stdlib.h>
#include <time.h>
#include "LinkedList.hpp"


using namespace std;

#define ARRAY_LENGTH 10 //called a macro

//prototype functions
void insertionSort(int ar[]);
void displayIntArray(int ar[]);

int main(int argc, char** argv)
{

    LinkedList* ll = new LinkedList();
    ll->addEnd(4);
    ll->addEnd(2);
    ll->addEnd(1);
    ll->addEnd(6);
    ll->addEnd(0);
    ll->addEnd(3);
    ll->mergeSort(ll, 0, 5);

    return 0;

}

void displayIntArray(int ar[])
{
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        cout << ar[i] << endl;
    }
}

void insertionSort(int ar[])
{
    int tempSwap;
    int theFollower;
    for (int currStart = 1; currStart < ARRAY_LENGTH; currStart++)
    {
        theFollower = currStart;
        while (theFollower > 0 && ar[theFollower] < ar[theFollower - 1])
        {
            tempSwap = ar[theFollower];
            ar[theFollower] = ar[theFollower - 1];
            ar[theFollower - 1] = tempSwap;
            theFollower--;
        }
    }
}