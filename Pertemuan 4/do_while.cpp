#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i = 0;

    do {
        cout << i << " ";
        i += 5;
    } while(i <= 20);
    
    return 0;
}
