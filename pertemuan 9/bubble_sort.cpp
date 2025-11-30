#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    int numOfSwapped = 0;
    for(int i = 0; i < n-1; i++) {
        bool swapped = false;
        for (int j = 0 ; j < n-1-i; j++){
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
                numOfSwapped++;
            }
        }
        if(!swapped) break;
    }
    cout << "Num of swapped: "<< numOfSwapped << endl;
}

int main() {
    int arr[] = {64,25,12,22,11};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    for(int ar: arr) {
        cout << ar << endl;
    }

}