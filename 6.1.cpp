#include <iostream>
#include "Array.h"
#include <time.h>

Array returnDynamicArray(int arr[], const int size)
{
    Array dynamicArray = Array(size);

    for (int i = 0; i < size; i++)
        dynamicArray[i] = arr[i];

    return dynamicArray;
}


int main()
{
    srand((unsigned)time(NULL));
    const int size = 10;
    int arr[size];

    for (int i = 0; i < size; i++)
        arr[i] = -50 + rand() % int(50 - (-50) + 1);

    Array A = returnDynamicArray(arr, size);
    cout << A;
    A.push_back(A.Sum());
    A.push_back(A.Avg());

    cout << A;
    A.Swap();
    cout << A;

    return 0;
}
