#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}
double sum(double a, double b) {
    return a + b;
}

int main() {
    cout << sum(6, 5) << endl;
    cout << sum(0.6, 0.5) << endl;
}