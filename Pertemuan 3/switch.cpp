#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    
    char grade;
    while(grade!='R')
    {    
        cin >> grade;

        switch(grade) {
            case 'A':
                cout << "Nilainya: 100" << endl;
                break;
            case 'B':
                cout << "Nilainya: 90" << endl;
                break;
            case 'C':
                cout << "Nilainya: 800" << endl;
                break;
            case 'R':
                break;
            default:
                cout << "Anda harus mengulang" << endl;
            
        }
        
    }

    return 0;
}
