#include <iostream>
using namespace std;

int main() {
    char ch; // Define a character variable
    int number; // Define an integer variable

    cout << "Enter a number: ";
    cin >> number; // Read an integer

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // X�a b? k� t? xu?ng d�ng trong buffer

    cout << "Enter a character: ";
    ch = cin.get(); // Read a character
    cout << "Thank You!\n";

    return 0;
}
