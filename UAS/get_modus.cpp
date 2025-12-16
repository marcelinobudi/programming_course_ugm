#include <iostream>
using namespace std;

void sort(int arr[], int n) {
    for(int i = 0; i < n-1; i++){
        int key = arr[i+1];
        int j = i;
        while(j >= 0 && key < arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int getmodus(int arr[], int n){
    sort(arr, n);
    int most_num = arr[0];
    int num_temp = arr[0];
    int frequency_most = 1;
    int frequency_temp = 1;
    
    for(int i = 1; i < n; i++){

        if(arr[i] == num_temp){
            frequency_temp++;
            if(frequency_most < frequency_temp){
                frequency_most = frequency_temp;
                most_num = num_temp;
            }
        }
        if(arr[i] != num_temp){
            if(frequency_most < frequency_temp){
                frequency_most = frequency_temp;
                most_num = num_temp;
            }
            frequency_temp = 1;
            num_temp = arr[i];
        }
    }
    return most_num;
}

int main(){
    int n;
    cout << "masukkan jumlah nilai: ";
    cin >> n;
    cout << endl;
    
    int array[n];
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }
    cout << "modus dari input tersebut adalah : " << getmodus(array, n) << endl;
    return 0;
}