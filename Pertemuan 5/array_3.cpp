#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // multidimensional array
    int board[4][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    // combining with enumeration
    enum carType {GM, BMW};
    enum color{RED, WHITE, BLUE};
    
    int inStock[5][5];
    inStock[GM][RED] = 5;
    cout << BMW <<endl;

    return 0;
}
