#include <iostream>
#include <cassert>
using namespace std;

int main(int argc, char const *argv[])
{
    
    int a, b;
    
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    assert(b != 0 && "Pembagi tidak boleh 0!");

    int hasil_bagi = a/b;

    cout << hasil_bagi << endl;

    return 0;
}
