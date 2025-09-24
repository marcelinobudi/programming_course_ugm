#include <iostream>
using namespace std;



int hitungLuasPersegi(int sisi) {
    int luas = sisi * sisi;
    return luas;
}

int main() {
    cout << hitungLuasPersegi(3) << endl;
    cout << hitungLuasPersegi(4) << endl;
    cout << hitungLuasPersegi(5) << endl;


    return 0;
}