#include <iostream>
#include <cmath>
using namespace std;

double windchillFactor(double speed, double temperature) {
    return 35.74 + 0.6215 * temperature - 35.75 * pow(speed, 0.16) + 0.4275 * temperature * pow(speed, 0.16);
}

void input(double &speed, double &temperature) {
    cout << "Masukkan kecepatan angin dalam miles/hour: ";
    cin >> speed;
    cout << "Masukkan temperature dalam fahrenheit: ";
    cin >> temperature;
}

int main() {
    double speed;
    double temperature;
    double W;
    input(speed, temperature);

    W = windchillFactor(speed, temperature);
    cout << "whindchill factor: " << W << endl;

    return 0;

}