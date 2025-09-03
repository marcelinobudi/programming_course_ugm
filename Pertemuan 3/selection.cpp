#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    // int grade;

    // cin >> grade;

    // if(grade>60)
    //     cout << "lulus";  
    // ===========================================
    // double jam_kerja = 41;
    // const int RATE = 25000;
    // double gaji;

    // if(jam_kerja > 40) {
    //     gaji = 40.0 * RATE + 1.5 * RATE * (jam_kerja - 40.0);
    //     cout << "Lembur!" << endl;
    // }
    // else 
    //     gaji = jam_kerja * RATE;
    // cout << fixed << setprecision(2);
    // cout << "Gaji yang didapatkan Rp" << gaji;
    // ==========================================

    int nilai;
    char grade;
    
    if(nilai > 90) 
        grade = 'A';
    else if(nilai > 80)
        grade = 'B';
    else if (nilai >70)
        grade = 'C';
    else if (nilai > 60)
        grade = 'D';
    else if (nilai > 50)
        grade = 'E';
    else
        grade = 'F';

    cout << "Nilainya " << grade << endl;

    return 0;
}
