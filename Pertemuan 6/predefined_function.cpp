#include <iostream>
#include <cmath>

using namespace std;

/*
cmath
cctype
algorithm
ctime
vector
fstream
memory
iomanip

BACA DS MALIK Halaman 381
*/

float b(int x, int y) {
    return sqrt(x - 2*y);
}
float c(int w, int t) {
    return pow(w, (t/3.0));
}

float d(int a, int b, int c) {
    float determinan = pow(b, 2) - 4 * a * c;
    float result = (-b + sqrt(determinan))/(2.0*a);
    return result;
}

float e(int x, int y) {
    int result = abs(x + 2*y - 3);
    return result;
}

//

int main() {
    float hasil_a = pow(3.75, 6.8);
    float hasil_b = b(5,3);
    float hasil_c = c(5, 4);
    float hasil_d = d(1, 1, 2);
    float hasil_e = e(5,4);
    cout << hasil_a << endl;
    cout << hasil_b << endl;
    cout << hasil_c << endl;
    cout << hasil_d << endl;
    cout << hasil_e << endl;
    return 0;
}

