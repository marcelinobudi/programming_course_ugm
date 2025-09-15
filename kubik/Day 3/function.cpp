#include <iostream>
using namespace std;

/*
 DRY: do not repeat yourself
 input -> proses -> output
 memecah kode besar jadi kecil
 reuse code.
*/

// void greet(string firstName, string lastName) {
//     cout << "Hello " << firstName << " " << lastName << endl;
// }



short swap(short numberOne, short numberTwo) {
    return (numberOne > numberTwo) ? numberOne : numberTwo;
}

// OVERLOADING

void greet(string name) {
    cout << "Hello " << name << endl;
}

void greet(string title, string name) {
    cout << "Hello " << title << " " << name << endl;
}

int main(int argc, char const *argv[])
{
    // greet("Marcelino", "Prakasya");
    // short max = swap(67, 11);
    // cout << max;

    return 0;
}
