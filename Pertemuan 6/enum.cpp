// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

enum Level {
  LOW=7,
  MEDIUM,
  HIGH
};

enum Gender {
    MALE,
    FEMALE
};

int main() {
    int nilai[5] = {};

    // Write C++ code here
    enum Level myVar;
    
    cout << myVar << endl;
    // cout << (myVar.LOW) << endl;
    switch(myVar) {
        case LOW:
            cout << "Low" << endl; break;
        case MEDIUM:
            cout << "MEDIUM" << endl; break;
        case HIGH:
            cout << "HIGH" << endl; break;
    }

    // cout << (LOW == MALE )<< endl; // TIDAK BISA comparison beda ENUM

    return 0;
}