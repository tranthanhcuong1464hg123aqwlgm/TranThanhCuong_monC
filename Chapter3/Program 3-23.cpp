#include <iostream>
using namespace std;

int main() {
    char ch;
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // X�a b? k� t? xu?ng d�ng trong buffer

    cout << "Enter a character: ";
    ch = cin.get();

    cout << "Thank You!" << endl;

    return 0;
}
