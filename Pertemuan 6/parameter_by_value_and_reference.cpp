#include <iostream>
using namespace std;

string nama_program = "Hitung Luas Persegi"; // global variable

int hitungLuasPersegi(int sisi /*parameter*/) {
    int luas = sisi * sisi;
    sisi *= 10; // Ini adalah parameter by value sehingga nilai variabel argumennya tidak ikut berubah
    return luas;
}

int hitungLuasPersegiReference(int &sisi /*parameter*/) {
    int luas = sisi * sisi;
    sisi *= 10; // Ini adalah parameter by value sehingga nilai variabel argumennya tidak ikut berubah
    return luas;
}

int hitungLuasPersegiPanjang(int panjang, int lebar) {
    int luas = panjang * lebar;
    return luas;
}

void tukar(int &a, int &b);

int main() {
    int sisi = 5;
    int panjang = 6;
    cout << "Nilai sisi: " << sisi << endl;
    cout << "Reference sisi: " << &sisi << endl;
    cout << hitungLuasPersegi(sisi) << endl;
    cout << "Nilai sisi: " << sisi << endl; // nilai sisi tidak berubah
    cout << hitungLuasPersegi(4) << endl;
    cout << hitungLuasPersegi(5) << endl;
    cout << hitungLuasPersegiPanjang(6, 5 /*argument*/) << endl;
    // cout << "Reference panjang: " << &panjang << endl;

    cout << hitungLuasPersegiReference(sisi) << endl;
    cout << "Nilai sisi: " << sisi << endl;

    cout << "=======TUKAR==========" << endl;


    return 0;
}

void tukar(int &a, int &b) {
    int temp;

    temp = a;
    a = b;
    b = temp;
}