#include <iostream>
using namespace std;
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void insertionSort(int arr[], int n) {

    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i-1;
        while(j >=0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key; //proses insertion
    }
}
int main() {
    const int n = 5;
    int arr[n] = {7,3,5,3,1};

    for(int i = 1; i < n; i++) {
        for(int j = i; j > 0; j--){
            if(arr[j-1]> arr[j]) {
                swap(arr[j], arr[j-1]);
            } else {
                break;
            }
        }
    }

    for(int ar: arr) {
        cout << ar << endl;
    }
}