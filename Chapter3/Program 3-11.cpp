#include <iostream>
using namespace std;

int main() {
    int begInv, sold, store1, store2, store3;

    // Nh?p s? l??ng t?n ??u k? cho t?t c? c?a h�ng.
    cout << "M?t tu?n tr??c, 3 c?a h�ng widget m?i m?\n";
    cout << "c�ng l�c v?i c�ng t?n ??u k?. T?n ??u k? l� g�? ";
    cin >> begInv;

    // Thi?t l?p t?n c?a m?i c?a h�ng.
    store1 = store2 = store3 = begInv;

    // Nh?p s? l??ng widget ?� b�n ? c?a h�ng 1.
    cout << "C?a h�ng 1 ?� b�n bao nhi�u widget? ";
    cin >> sold;
    store1 -= sold; // ?i?u ch?nh t?n kho c?a h�ng 1.

    // Nh?p s? l??ng widget ?� b�n ? c?a h�ng 2.
    cout << "C?a h�ng 2 ?� b�n bao nhi�u widget? ";
    cin >> sold;
    store2 -= sold; // ?i?u ch?nh t?n kho c?a h�ng 2.

    // Nh?p s? l??ng widget ?� b�n ? c?a h�ng 3.
    cout << "C?a h�ng 3 ?� b�n bao nhi�u widget? ";
    cin >> sold;
    store3 -= sold; // ?i?u ch?nh t?n kho c?a h�ng 3.

    // Hi?n th? t?n kho hi?n t?i c?a m?i c?a h�ng.
    cout << "\nT?n kho hi?n t?i c?a m?i c?a h�ng:\n";
    cout << "C?a h�ng 1: " << store1 << endl;
    cout << "C?a h�ng 2: " << store2 << endl;
    cout << "C?a h�ng 3: " << store3 << endl;

    return 0;
}
