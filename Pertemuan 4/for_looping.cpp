#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "increment" << endl;
    for(double i = 0; i <= 5; i++) {
        cout << i << endl;
    }

    // illegal statement
    /*
    for (;;) {
        // statement
    }
    */
    return 0;
}
