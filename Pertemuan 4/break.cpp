#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i = 0;

    while(i <= 20) {
        if(i == 15) {
            continue;
        }
        cout << i << " ";
        i++;
        // if(i == 11) {
        //     break;
        // }
    }
    
    return 0;
}
