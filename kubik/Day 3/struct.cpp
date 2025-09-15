#include <iostream>
using namespace std;

struct t_shirt {
    string model;
    string size;
    float price;
};

struct shoppingChart {
    t_shirt clothes;
    int quantity;
    float totalPrice;
};

int main() {
    shoppingChart shopingRecord[15];
    return 0;
}
