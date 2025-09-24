#include <iostream>
#include <cmath>
using namespace std;

/*Halaman 470 D.S. Malik*/
bool latihan_1(double first, double second, double third) {
    bool result = false;
    if(pow(first, second) == third) {
        result = true;
    } 
    return result;
}

int main() {
    cout << (latihan_1(3,3,8) ? "true" : "false") << endl;
    return 0;
}