/*
Struct (Records) : collection of a fixed number of components
diakses dengan namanya

component struct disebut members
useful for organizing data
*/

// struct adalah reserved word.
// struct tidak memakan alokasi memori. hanya memakan ketika dipanggil (dideklarasikan melalui variabel.)

#include <iostream>
using namespace std;

struct nameType{
    string first;
    string middle;
    string last;
};

struct dateType {
    int month;
    int day;
    int year;
};

struct employeeType {
    nameType name;
    string empID;
    dateType hireDate;
    dateType quitDate;
    double salary;
};

int main() {
    
    return 0;
}
