#include <iostream>
using namespace std;

struct t_shirt{
    string model;
    string size;
    float price;
};

struct shoppingCart {
    t_shirt clothes;
    int quantity;
    float totalPrice;
};

shoppingCart shoppingRecord[100];

int main() {
    cout << "Enter the number of items in the shopping cart";
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Enter the details for item " << i + 1 << endl;
        cout << "Model: ";
        cin >> shoppingRecord[i].clothes.model;
        cout << "size: ";
        cin >> shoppingRecord[i].clothes.size;
        cout << "price: ";
        cin >> shoppingRecord[i].clothes.price;
        cout << "Quantity: ";
        cin >> shoppingRecord[i].quantity;

        shoppingRecord[i].totalPrice = shoppingRecord[i].clothes.price * shoppingRecord[i].quantity;
    }


    cout << "\nShopping Cart Summary:\n";
    for(int i = 0; i < n; i++) {
        cout << "Item " << i + 1 << ": " << shoppingRecord[i].clothes.model << " (" << shoppingRecord[i].clothes.size << ") - $"
            << shoppingRecord[i].clothes.price << ") x "
            << shoppingRecord[i].quantity << " = $" 
            << shoppingRecord[i].clothes.price * shoppingRecord[i].quantity << endl;
    }
    return 0;
}