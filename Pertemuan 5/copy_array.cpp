#include <iostream>
using namespace std;

// khusus array, parameternya menjadi pass by reference, bukan pass by value.
void copyArray(int arr1[], int source, int arr2[], int target, int numOfElements) {
    for(int i = source; i < source + numOfElements; i++) {
        arr2[target] = arr1[i];
        cout << arr2[target] << endl;
        target++;
    }
}

int main() {
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {};
    copyArray(arr1, 0, arr2, 0, 5);
    cout << arr2[1] << endl;
    return 0;
}