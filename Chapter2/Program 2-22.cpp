#include <iostream>
using namespace std;

int main() {
    // Bi?n ?? l?u l??ng l??ng h�ng th�ng v� s? ti?n ?�ng g�p.
    double monthlyPay = 6000.0, contribution;

    // T�nh v� hi?n th? s? ti?n ?�ng g�p 5%.
    contribution = monthlyPay * 0.05;
    cout << "5 percent is $" << contribution << " per month.\n";

    // T�nh v� hi?n th? s? ti?n ?�ng g�p 7%.
    contribution = monthlyPay * 0.07;
    cout << "7 percent is $" << contribution << " per month.\n";

    // T�nh v� hi?n th? s? ti?n ?�ng g�p 10%.
    contribution = monthlyPay * 0.1;
    cout << "10 percent is $" << contribution << " per month.\n";

    return 0;
}
