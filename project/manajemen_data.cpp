#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>
#include <string>
using namespace std;

const int MAX = 500;


struct ChannelYoutube{
    string nama;
    string negara;
    int jumlahVideo;
    int jumlahPenonton;
    int jumlahLike;
    int id;
};

//utility
void swap(ChannelYoutube &a, ChannelYoutube &b){
    ChannelYoutube temp = a;
    a = b;
    b = temp;
}

void mergeArray(int  arr[], int first, int middle, int last){
    int n_left = middle-first+1, n_right = last-middle;

    int temp_left[n_left], temp_right[n_right];

    for(int i = 0; i < n_left; i++){
        temp_left[i] = arr[first+i];
    }
    for(int i = 0; i< n_right; i++){
        temp_right[i] = arr[middle+i+1];
    }
    int i = 0;
    int j = 0;
    int k = first;
    while(i < n_left && j < n_right){
        if(temp_left[i] <= temp_right[j]){
            arr[k] = temp_left[i];
            i++;
        } else {
            arr[k] = temp_right[j];
            j++;
        }
        k++;
    }
    while(i < n_left){
        arr[k] = temp_left[i];
        i++;
        k++;
    } 
    while(j < n_right){
        arr[k] = temp_right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int first, int last){
    if(first < last){
        int middle = (first+last)/2;
        mergeSort(arr, first, middle);
        mergeSort(arr, middle+1, last);
        mergeArray(arr, first, middle, last);
    }
}

int createId(){
    return rand() % 1000000;
}

void lihatChannel(ChannelYoutube channel[], int &realSize){
    for(int i = 0; i < realSize; i++){
        cout << channel[i].nama << endl;
    }
}

void tambahChannel(ChannelYoutube arr[], int &realSize){
    if(realSize >= MAX) {
        cout << "Jumlah saluran penuh" << endl;
        return;
    }
    
    int id = createId();
    string zero;
    string nama;
    string negara;
    int jumlahVideo;
    int jumlahPenonton;
    int jumlahLike;

    cout << "Masukkan nama saluran: ";
    getline(cin, zero);
    getline(cin, nama);
    cout << "Masukkan negara saluran: ";
    getline(cin, zero);
    getline(cin, negara);
    cout << "Masukkan jumlah video saluran: ";
    cin >> jumlahVideo;
    cout << "Masukkan jumlah penonton saluran: ";
    cin >> jumlahPenonton;
    cout << "Masukkan jumlah like saluran: ";
    cin >> jumlahLike;

    ChannelYoutube channel = {
        nama, negara, jumlahVideo, jumlahPenonton, jumlahLike, id
    };

    arr[realSize] = channel;
    realSize++;

    // Logika insertion sort
    for(int i = realSize-1; i > 0; i--){
        if(arr[i].id < arr[i-1].id){
            swap(arr[i], arr[i-1]);
        }
    }
}

void cariChannel(){}

// enum jenisPengurutan{
//     ID,
//     PENONTON,
//     LIKE,
//     VIDEO
// };

// void urutkanChannel(ChannelYoutube channel[], jenisPengurutan by){
//     switch(by){
//         case ID: {

//         }
//         case PENONTON: {

//         }
//         case LIKE: {

//         }
//         case VIDEO: {

//         }
//         default: {
//             break;
//         }
//     }
// }

void tampilkanMenu(){
    cout << "=====MANAJEMEN SALURAN YOUTUBE=====" << endl;
    cout << "[1] Lihat Saluran" << endl;
    cout << "[2] Tambahkan Saluran" << endl;
    cout << "[0] Berhenti" << endl << endl;

}

int main(){
    ChannelYoutube channel[MAX];
    int realSize = 0;
    int pilihan = 0;
    do {
        tampilkanMenu();
        cout << "pilihan: ";
        cin >> pilihan;
        switch(pilihan){
            case 1: {
                lihatChannel(channel, realSize);
                break;
            }
            case 2: {
                tambahChannel(channel, realSize);
                break;
            }
            default: {
                break;
            }
        }
    } while(pilihan != 0);
}