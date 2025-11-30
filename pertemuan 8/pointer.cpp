#include <iostream>
using namespace std;

int main() {
    int x = 55;
    int *p;
    p = &x;

    cout << "Reference" << endl;
    cout << &x << endl;
    cout << p << endl << endl;

    cout << *p << endl << endl;

    *p = 100;

    cout << x << endl;
    
    int y = 10;
    p = &y;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "p: " << *p << endl;

    return 0;
}