#include <iostream>
#include <array>
using namespace std;

array<int, 3> returnArray() {
    return {2,3,4}; // Bisa melakukan return
}

int main() {
    array<int, 3> arrayModern = {10,20,30};
    cout << arrayModern.size() << endl;


    return 0;
}