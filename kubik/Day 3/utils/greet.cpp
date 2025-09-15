#include <iostream>
#include "greet.hpp"

using namespace std;

namespace messaging {
    void greet(string name) {
        cout << "Hello " << name;
    }
}