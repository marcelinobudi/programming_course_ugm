#include <iostream>
#include <cmath>
using namespace std;

/*
Write a C++ program that declares an array alpha of 50 components of type
double. Initialize the array so that the first 25 components are equal to the
square of the index variable, and the last 25 components are equal to three times
the index variable. Output the array so that 10 elements per line are printed
*/
int main() {
    double alpha[50];
    for(int i = 0; i < 50; i++) {
        if(i < 25) {
            alpha[i] = sqrt(i);
        } else {
            alpha[i] = 3*i;
        }
    }
    for(int i = 0; i < 50; i++) {
        cout << alpha[i] << " ";
        if((i+1) % 10 == 0){
            cout << endl;
        }
    }
    return 0;
}