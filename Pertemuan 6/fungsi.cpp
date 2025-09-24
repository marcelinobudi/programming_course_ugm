#include <iostream>
using namespace std;

void outputkanArray(double sales[], int n) {
    for(int index = 0; index < n; index++) 
        cout << sales[index] << " - ";
}

int main() {
    // const int ARRAY_SIZE = 10;
    // int nilai[ARRAY_SIZE];

    // nilai[7] = 10;
    // nilai[1] = 20;
    // nilai[5] = nilai[7] + nilai[1];

    // cout << nilai[0] << endl; // nilai random karena belum diinisialisasi

    const int NUMBER_OF_SALES = 10;
    double sales[NUMBER_OF_SALES];
    int index;
    double largestSale, sum, avg;

    // inisialisasi array
    for(index = 0; index < NUMBER_OF_SALES; index++) 
        sales[index] = 0.0;

    // minta pengguna untuk menginput nilai sales
    for(index = 0; index < NUMBER_OF_SALES; index++) {
        cout << "Input Sales ke " << (index+1) << " = ";
        cin >> sales[index];
    }

    // output
    outputkanArray(sales, NUMBER_OF_SALES);

    cout << endl;

    // finding the sum and average of an array
    sum = 0;
    for (index = 0; index < NUMBER_OF_SALES; index++) {
        sum = sum + sales[index];
    }
    avg = sum/NUMBER_OF_SALES;

    cout << "Total sales: " << sum << endl;
    cout << "Average sales: " << avg << endl;

    // largest element in the array
    int max_index = 0;
    for(index = 1; index < NUMBER_OF_SALES; index++) {
        
        if(sales[max_index] < sales[index]) 
            max_index = index;
        cout << "Nilai tersebar saat ini = " << sales[max_index] << endl;
    }
    double largest_scale = sales[max_index];
    cout << "Nilai terbesar " << largest_scale << endl;
    
    return 0;
}