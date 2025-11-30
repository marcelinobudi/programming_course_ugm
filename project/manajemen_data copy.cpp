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