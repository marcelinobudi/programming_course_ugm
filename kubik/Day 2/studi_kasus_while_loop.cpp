#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int saldo = 0;
    int target = 500'000;
    int nabung = 100'000;
    int minggu  = 0;

    while(saldo < target) {
        saldo += nabung;
        minggu++;
        cout << "Minggu ke-" << minggu << " | Saldo: Rp" << saldo << endl;
    }
    cout << "Target tercapai dalam " << minggu << " Minggu!";

    return 0;
}
