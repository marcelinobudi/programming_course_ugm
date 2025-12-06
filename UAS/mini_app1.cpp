/*
Mini app bubble sort + linear search
*/

#include <iostream>
using namespace std;

void show(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void urutkan(int kucing[], int n){
    for(int i = 0; i < n -1; i++) {
        for(int j = 0; j < n - 1 - i; j++){
            if(kucing[j+1] < kucing[j]){
                int temp = kucing[j+1];
                kucing[j+1] = kucing[j];
                kucing[j] = temp;
            }
        }
    }
}
int cari(int kucing[], int n, int target){
    for(int i = 0; i < n; i++){
        if(kucing[i] == target) {
            return i + 1;
        }

    }
    return -1;
}

int main() {
    int n = 9;
    int kucing[] = {67, 32, 1, 69, 40, 41, 60, 77, 5};
    int target = 60;
    cout << "jumlah langkah: " << cari(kucing, n, target) << endl;
    urutkan(kucing, n);
    show(kucing, n);
    return 0;
}