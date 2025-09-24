#include <iostream>
using namespace std;

string nama_program = "Hitung Luas Persegi"; // global variable

int hitungLuasPersegi(int sisi /*parameter*/) {
    int luas = sisi * sisi;
    return luas;
}

int hitungLuasPersegiPanjang(int panjang, int lebar) {
    int luas = panjang * lebar;
    return luas;
}

int main() {
    cout << hitungLuasPersegi(3) << endl;
    cout << hitungLuasPersegi(4) << endl;
    cout << hitungLuasPersegi(5) << endl;
    cout << hitungLuasPersegiPanjang(5, 6 /*argument*/) << endl;


    return 0;
}