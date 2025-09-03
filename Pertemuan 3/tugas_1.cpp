#include <iostream>
#include <algorithm>
#include <cassert>
#include <iomanip>
using namespace std;


double first_option(){
    return 5'000.0 + 20'000.0;
}

double second_option(double net_price, int predicted_copies_sold) {
    const float FEE_RATE = 0.125;
    double profit = FEE_RATE * net_price;
    double royalty = profit * predicted_copies_sold;
    return royalty;
}   

double third_option(double net_price, int predicted_copies_sold) {
    const float FEE_RATE = 0.10;
    const float bonus = 0.14;
    double profit = FEE_RATE * net_price;
    double royalty = profit * 4'000;

    royalty = (predicted_copies_sold <= 4000) ? royalty : royalty + (predicted_copies_sold - 4'000) * bonus * net_price;

    return royalty;
}

int main(int argc, char const *argv[])
{
    double net_price;
    int predicted_copies_sold;
    double royalty_first_option, royalty_second_option, royalty_third_option;
    double recomended_royalty;

    cout << "Masukkan harga bersih per eksemplar: ";
    cin >> net_price;
    cout << "Perkiraan jumlah eksemplar yang akan terjual: ";
    cin >> predicted_copies_sold;

    royalty_first_option = first_option();
    royalty_second_option = second_option(net_price, predicted_copies_sold);
    royalty_third_option = third_option(net_price, predicted_copies_sold);

    recomended_royalty = max(
        royalty_first_option,
        max(
            royalty_second_option,
            royalty_third_option
        )
        
    );

    assert(
        recomended_royalty == royalty_first_option ||
        recomended_royalty == royalty_second_option ||
        recomended_royalty == royalty_third_option &&
        "Terdapat kesalahan kalkulasi"
    );

    // unit testing
    assert(first_option() == 25000);
    
    cout << fixed << setprecision(2);
    cout << "Royalti opsi pertama: " << royalty_first_option << endl;
    cout << "Royalti opsi kedua: " << royalty_second_option << endl;
    cout << "Royalti opsi ketiga: " << royalty_third_option << endl;

    cout << "Opsi yang direkomendasikan adalah ";

    if(recomended_royalty == royalty_first_option) 
        cout << "opsi pertama." << endl;
    else if(recomended_royalty == royalty_second_option)
        cout << "opsi kedua." << endl;
    else
        cout << "opsi ketiga." << endl;

    cout << "Royalti tertinggi: " << recomended_royalty;
    


    return 0;
}
