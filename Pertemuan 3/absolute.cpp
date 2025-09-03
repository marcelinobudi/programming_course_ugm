#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int value;
    cin >> value;
    int temp = value;

    if (value < 0)
        value = -value;

    cout << "So, the absolute value of " << temp << " is " << value;
    
    return 0;
}
