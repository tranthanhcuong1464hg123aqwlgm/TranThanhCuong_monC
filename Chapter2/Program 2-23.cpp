#include <iostream>
using namespace std;

int main() {
    // Bi?n ?? l?u gi� th??ng, s? ti?n gi?m gi� v� gi� b�n.
    double regularPrice = 59.95, discount, salePrice;

    // T�nh s? ti?n gi?m gi� 20%.
    discount = regularPrice * 0.2;

    // T�nh gi� b�n b?ng c�ch tr? s? ti?n gi?m gi� kh?i gi� th??ng.
    salePrice = regularPrice - discount;

    // Hi?n th? k?t qu?.
    cout << "Regular price: $" << regularPrice << endl;
    cout << "Discount amount: $" << discount << endl;
    cout << "Sale price: $" << salePrice << endl;

    return 0;
}
