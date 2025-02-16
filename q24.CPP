#include <iostream>
using namespace std;

int main() {
    int num;
    long long factorial = 1;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        do {
            factorial *= num;
            num--;
        } while (num > 0);

        cout << "Factorial is: " << factorial << endl;
    }

    return 0;
}
