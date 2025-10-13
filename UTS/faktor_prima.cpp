#include <iostream>
#include <string>
using namespace std;

int main() { 
    int i = 2, n, num;
    string temp = "";
    cin >> n;
    num = n;

    while (n != 1) {
        if(n % i == 0) {
            temp = temp + to_string(i);
            n /= i;
            if(n != 1) {
                temp = temp + "*";
            }
        } else {
            i++;
        }
    }
    cout << "Faktor prima dari " << num << " adalah " << temp;
    return 0;
}