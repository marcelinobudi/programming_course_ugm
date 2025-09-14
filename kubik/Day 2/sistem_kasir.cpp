#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    const int n_item = 3;
    int pilihan, jumlah, total_belanja;

    string barang[n_item] = {"pensil", "buku", "penghapus"};
    int harga[n_item] = {2'000, 10'000, 1'500};
    int stok[n_item] = {10, 5, 7};

    cout << "=== Sistem Kasir ===" << endl;
    for(int i = 0; i < n_item; i++) {
        cout << i + 1 << ". " << barang[i] << " (Rp" << harga[i] << ") - Stock: " << stok[i] << endl; 
    }
    cout << endl;

    cout << "Pilih barang (1-3): ";
    cin >> pilihan;

    if(pilihan < 1 || pilihan > 3) {
        cout << "Input barang tidak valid" << endl;
        return 0;
    }

    cout << "Jumlah: ";
    cin >> jumlah;
    
    if(jumlah > stok[pilihan-1]) {
        cout << "Stok barang " << barang[pilihan-1] << " kurang. Hanya tersedia " << stok[pilihan-1] << endl;
        return 0;
    }

    stok[pilihan-1] -= jumlah;
    total_belanja = harga[pilihan-1] * jumlah;
    cout << "Total belanja: Rp" << total_belanja; 
    return 0;
}
