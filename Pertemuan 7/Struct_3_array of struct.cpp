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

struct employeeType {
    string firstName;
    string lastName;
    int personID;
    string deptID;
    double yearlySalary;
    double monthylSalary;
};

int main() {
    employeeType employees[50];
    return 0;
}
