#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers (a and b): ";
    cin >> a >> b;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << "After swapping (using temp variable): a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    a = a + b;  
    b = a - b;  
    a = a - b;  

   
    cout << "After swapping (without temp variable): a = " << a << ", b = " << b << endl;

    return 0;
}
