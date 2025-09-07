#include <iostream>
#include <cassert>
#include <cmath>
using namespace std;

string binaryConvertion(int decimal) {

    assert(decimal >= 0 && "Decimal harus bilangan cacah");
    string binary = "";
    int div_result = decimal;
    int div_remainder;
    do{
        div_remainder = div_result % 2;
        div_result = floor(div_result / 2);
        binary = to_string(div_remainder) + binary;
    } while(div_result > 0);
    
    return binary;
}

int main(int argc, char const *argv[])
{
    
    int decimal;
    cin >> decimal;
    cout << binaryConvertion(decimal);
    return 0;
}
