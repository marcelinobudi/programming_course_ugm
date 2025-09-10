#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[])
{
    // int i  = 0;
    // while (i <= 20) {
    //     cout << i << " ";
    //     i += 5;
    // }

    /*
        Sentinel-controlled looping
    */
    // int var;
    // cin >> var;

    // while(var!=80) {
    //     cin >> var;
    // }
    
    /*
        Flag-controlled looping
    */

    // srand(12);

    // bool found = false;
    // int randomNumber = rand() % 100;
    // int tebakan;
    
    // while (!found) {
    //     cin >> tebakan;
    //     if(tebakan > randomNumber) {
    //         cout << "Angka lebih besar dari seharusnya" << endl;
    //     } else if (tebakan < randomNumber) {
    //         cout << "Angka lebih kecil dari seharusnya" << endl;
    //     } else {
    //         cout << "Angka benar" << endl;
    //         found = true;
    //     }
    // }

    /*
        eof controlled
    */

    srand(12);

    bool found = false;
    int randomNumber = rand() % 100;
    int tebakan;
    int percobaan = 0;
    int max_coba = 6;
    
    while (!found && percobaan < max_coba) {
        cin >> tebakan;
        cout << "Percobaan ke: " << percobaan + 1 << endl;
        if(tebakan > randomNumber) {
            cout << "Angka lebih besar dari seharusnya" << endl;
        } else if (tebakan < randomNumber) {
            cout << "Angka lebih kecil dari seharusnya" << endl;
        } else {
            cout << "Angka benar" << endl;
            found = true;
        }
        percobaan++;
    }

    if(!found) {
        cout << "Anda belum menemukan";
    } else {
        cout << "Anda menemukan";
    }
    return 0;
}
