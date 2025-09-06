#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char sex;
    double weight;
    
    double b;
    float body_fat;
    float fat_percentage;

    cout << "Anda laki-laki atau perempuan? (l/p): ";
    cin >> sex;

    switch (sex)
    {
    case 'l':
        double a1, a2;
        double waist_size;
        cout << "Masukkan panjang lingkar pinggang anda: ";
        cin >> waist_size;

        a1 = (weight * 1.082 ) / + 94.2;
        a2 = waist_size * 4.15;
        
        b = a1 - a2;
        break;
    
    case 'p':
        double a1, a2, a3, a4, a5;
        double wrist_size, waist_size, hip_size, lower_arm_size;

        cout << "Masukkan panjang lingkar pergelangan tangan anda: ";
        cin >> wrist_size;
        cout << "Masukkan panjang lingkar pinggang anda: ";
        cin >> waist_size;
        cout << "Masukkan panjang lingkar pinggul anda: ";
        cin >> hip_size;
        cout << "Masukkan panjang lingkar lengan bawah anda: ";
        cin >> lower_arm_size;

        a1 = (weight * 0.732) + 8.987;
        a2 = wrist_size / 3.140;
        a3 = waist_size * 0.157;
        a4 = hip_size * 0.249;
        a5 = lower_arm_size * 0.434;
        
        b = a1 + a2 - a3 -a4  + a5;
        break;

    default:
        cout << "Input yg anda masukkan salah!" << endl;
        break;
    }

    body_fat =  weight - b;
    fat_percentage = (body_fat * 100) / weight;

    cout << "HASIL:" << endl;
    cout << "Lemak tubuh: " << body_fat << endl;
    cout << "Persentase lemak tubuh: " << fat_percentage << endl;
    
    return 0;
}
