#include <iostream>
using namespace std;
int main() {
    char character;
    int integer;
    float floatingPoint;
    cout << "Enter a character: ";
    cin >> character;

    cout << "Enter an integer: ";
    cin >> integer;

    cout << "Enter a floating-point number: ";
    cin >> floatingPoint;
    cout << "\nFormatted Table:" << endl;
    cout << "----------------------" << endl;
    cout << "Character: " << character << endl;
    cout << "Integer: " << integer << endl;
    cout << "Float: " << floatingPoint << endl;
    cout << "----------------------" << endl;

    return 0;
}
