#include <iostream>
#include <cmath>
using namespace std;

bool isRepresentableExactly(float num) {
    int exponent;
    float mantissa = frexp(num, &exponent);
    
    while (mantissa != floor(mantissa) && exponent > -126) {
        mantissa *= 2;
        exponent--;
    }
    
    return mantissa == floor(mantissa);
}

int main() {
    float num;
    cout << "Enter a floating-point number: ";
    cin >> num;
    
    if (isRepresentableExactly(num)) {
        cout << num << " can be represented exactly in binary format." << endl;
    } else {
        cout << num << " cannot be represented exactly in binary format because it has a repeating binary fraction." << endl;
    }
    
    return 0;
}
