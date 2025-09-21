#include <iostream>
#include <cassert>
using namespace std;

/*
Write a C++ function, smallestIndex, that takes as parameters an int
array and its size and returns the index of the first occurrence of the smallest
element in the array. Also, write a program to test your function
*/

int smallestIndex(int arr[], int size) {
    int min = 1;
    for(int i = 0; i < size; i++){
        if(arr[i] < arr[min]) {
            min = i;
        } 
    }
    return min;
}

int main() {
    int arr1[] = {10,5,3,5,3};
    int arr2[] = {3, 30, 444, 32, 74, 3, 9};

    assert(
        (smallestIndex(arr1, 5) == 2) 
    );
    assert(smallestIndex(arr2, 7) == 0);
    return 0;
}