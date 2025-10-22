#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int &p = x;
    cout << p << endl;
    int y = 20;
    p = &y;

    return 0;
}