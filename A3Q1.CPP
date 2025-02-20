#include <iostream>
using namespace std;

int maxNumber(int a, int b) {
    return (a > b) ? a : b;  
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    cout << "The larger number is: " << maxNumber(num1, num2) << endl;
    return 0;
}
