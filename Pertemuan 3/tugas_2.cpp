#include <iostream>
#include <algorithm>
#include <cassert>
#include <iomanip>
using namespace std;

double price_per_square_foot(double price, double area) {
    return price / area;
}

int main(int argc, char const *argv[])
{
    // tiga model rumah: Colonial, Split-entry, dan Single-story
    double colonial_base_price, split_entry_base_price, single_story_base_price;
    double colonial_area, split_entry_area, single_story_area;
    double minimum_price_per_square_foot;

    cout << "Masukan harga dasar Colonial model: ";
    cin >> colonial_base_price;
    cout << "Masukan luas bangunan Colonial model: ";
    cin >> colonial_area;

    cout << "Masukan harga dasar Split-entry model: ";
    cin >> split_entry_base_price;
    cout << "Masukan luas bangunan Split-entry model: ";
    cin >> split_entry_area;

    cout << "Masukan harga dasar single-story model: ";
    cin >> single_story_base_price;
    cout << "Masukan luas bangunan single-story model: ";
    cin >> single_story_area;

    double colonial_price_per_square_foot = price_per_square_foot(colonial_base_price, colonial_area);
    double split_entry_price_per_square_foot = price_per_square_foot(split_entry_base_price, split_entry_area);
    double single_story_price_per_square_foot = price_per_square_foot(single_story_base_price, single_story_area);

    minimum_price_per_square_foot = min(
        colonial_price_per_square_foot,
        min(
            split_entry_price_per_square_foot,
            single_story_price_per_square_foot
        )
    );

    assert(
        (
            minimum_price_per_square_foot == colonial_price_per_square_foot ||
            minimum_price_per_square_foot == split_entry_price_per_square_foot ||
            minimum_price_per_square_foot == single_story_price_per_square_foot
        ) 
        &&
        "Terdapat kesalahan kalkulasi"
    );

    // unit testing
    assert(price_per_square_foot(1'250'000, 100.0) == 1'250'000.00 / 100.00);
    
    cout << endl;
    cout << "Harga per kaki persegi model Colonial: " << colonial_price_per_square_foot << endl;
    cout << "Harga per kaki persegi model Split-entry: " << split_entry_price_per_square_foot << endl;
    cout << "Harga per kaki persegi model single story: " << single_story_price_per_square_foot << endl << endl;
    
    cout << "Model rumah dengan harga per kaki persegi terendah adalah: ";

    if(minimum_price_per_square_foot == colonial_price_per_square_foot)
        cout << "Model Colonial" << endl;
    else if(minimum_price_per_square_foot == split_entry_price_per_square_foot)
        cout << "Model Split-entry" << endl;
    else
        cout << "Model single story" << endl;
    
    cout << "Harga per kaki model tersebut adalah " << minimum_price_per_square_foot;

    return 0;
}
