#include <iostream>
using namespace std;

void header(string title) {
    cout << "===========" << title << "===========" << endl;
}

int main() {

    int skor;

    header("Assignment di condition statement");
    if(skor = 10) {
        cout << "True" << endl;
    }

    if(skor = 0) {
        cout << "True" << endl;
    } else {
        cout << "false" << endl;
    }

    if((skor = 0) == 0) {
        cout << "True" << endl;
    }

    if((skor = 15) > 14) {
        cout << "true" << endl;
    }

    if((skor = 15) > 16) {
        cout << "true" << endl;
    }  else {
        cout << "False" << endl;
    }

    header("Kasus short-circuit evaluation");
    int y = 5;
    if(true || ++y > 5){ // jika ada true di operasi OR, langsung simpulkan true
        cout << "true" << endl;
        cout << y << endl;
    }
    y = 5;
    if(false || ++y > 5) { // karena di kiri false, perlu di cek dulu sebelah kanan
        cout << "true" << endl;
        cout << y << endl;
    }
    y = 5;
    if((true || ++y > 5) && y == 5) { // ++y diskip karena proposisi pertama bernilai true
        cout << "true" << endl;
        cout << y << endl;
    } else {
        cout << "false" << endl;
        cout << y << endl;
    }

    if((true || ++y > 5) && (y=0)) { // ++y diskip karena proposisi pertama bernilai true
        cout << "true" << endl;
        cout << y << endl;
    } else {
        cout << "false" << endl;
        cout << y << endl;
    }

    return 0;
}