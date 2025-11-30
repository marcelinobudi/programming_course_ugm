#include <iostream>
using namespace std;

int factorial(int m) {
    if(m == 0) {
        return 1;
    }
    return m * factorial(m-1);
    // return (m == 0) ? 1 : m * factorial(m-1);
}

int sum(int n) {
    if(n == 0) {
        return 0;
    }
    return n + sum(n-1);
}

float fibonaci(int n) {
    if(n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonaci(n-1) + fibonaci(n-2);
}

float fibonaciL(int n) {
    if(n == 1 || n == 0) return n;
    int n1 = 0, n2 = 1, r;
    for(int i = 2; i <= n; i++) {
        r = n1 + n2;
        n1 = n2;
        n2 = r;
    } 
    return r;
}

void reverseNumber(unsigned int n) {
    if(n > 0 ) {
        cout << n % 10;
        reverseNumber(n/10);
    }
}
int main() {
    cout << factorial(5) << endl;
    cout << sum(5) << endl;
    cout << fibonaciL(5) << endl;    
    cout << "Golden ratio: " << fibonaciL(100)/fibonaciL(99) << endl;
    reverseNumber(1035);
    return 0;
}