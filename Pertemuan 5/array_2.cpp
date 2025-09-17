#include <iostream>
using namespace std;

int main() {
    // ===============
    int arr[] = {3,4,5,3,6}; // BISA tidak perlu menulis jumlah elemen
    // int size = sizeof(arr) / sizeof(arr[0]);
    // cout << size << endl;

    // ======================
    // sisa nya berisi 0
    
    // int list[10] = {0}; // seluruhnya berisi 0;
    // cout << list[3] << endl;

    int test[10] = {2,1,4}; // yg tak terdifinisi berisi 0;
    cout << test[5] << endl;

    cout << (arr > test) << endl; // legal, tapi bisa tak sesuai harapan.

    // cout << sizeof(1);
}