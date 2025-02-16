#include <iostream>
using namespace std;

int circularLeftShift(int num, int shift, int bitSize) {
    return (num << shift) | (num >> (bitSize - shift));
}

int circularRightShift(int num, int shift, int bitSize) {
    return (num >> shift) | (num << (bitSize - shift));
}

int main() {
    int num, shift, bitSize = 32;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Enter shift amount: ";
    cin >> shift;
    
    cout << "Circular Left Shift: " << circularLeftShift(num, shift, bitSize) << endl;
    cout << "Circular Right Shift: " << circularRightShift(num, shift, bitSize) << endl;
    
    return 0;
}
