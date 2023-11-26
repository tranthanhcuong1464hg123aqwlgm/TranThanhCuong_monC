#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double day1, day2, day3, total;

    // Nh?p doanh s? b�n h�ng cho m?i ng�y
    cout << "Nh?p doanh s? b�n h�ng cho ng�y 1: ";
    cin >> day1;
    cout << "Nh?p doanh s? b�n h�ng cho ng�y 2: ";
    cin >> day2;
    cout << "Nh?p doanh s? b�n h�ng cho ng�y 3: ";
    cin >> day3;

    // T�nh t?ng doanh s? b�n h�ng
    total = day1 + day2 + day3;

    // Hi?n th? c�c s? li?u b�n h�ng
    cout << "\nDoanh s? b�n h�ng\n";
    cout << "------------------\n";
    cout << setprecision(2) << fixed; // Hi?n th? s? l? v?i 2 ch? s? th?p ph�n
    cout << "Ng�y 1: " << setw(8) << day1 << endl;
    cout << "Ng�y 2: " << setw(8) << day2 << endl;
    cout << "Ng�y 3: " << setw(8) << day3 << endl;
    cout << "T?ng: " << setw(8) << total << endl;

    return 0;
}
