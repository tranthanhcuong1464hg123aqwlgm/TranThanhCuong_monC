#include <iostream>
using namespace std;

int main() {
    double regularWages, // L?u l??ng c? b?n
        basePayRate = 18.25, // T? l? l??ng c? b?n
        regularHours = 40.0, // Gi? l�m vi?c tr? gi? l�m th�m
        overtimeWages, // L?u l??ng l�m th�m gi?
        overtimePayRate = 27.78, // T? l? l??ng l�m th�m gi?
        overtimeHours = 10, // Gi? l�m th�m gi?
        totalWages; // L?u t?ng l??ng

    // T�nh to�n l??ng c? b?n
    regularWages = basePayRate * regularHours;

    // T�nh to�n l??ng l�m th�m gi?
    overtimeWages = overtimePayRate * overtimeHours;

    // T�nh to�n t?ng l??ng
    totalWages = regularWages + overtimeWages;

    // Hi?n th? t?ng l??ng
    cout << "L??ng cho tu?n n�y l� $" << totalWages << endl;

    return 0;
}
