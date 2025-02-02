#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    int i = 2;
    while (i * i <= num) {
        if (num % i == 0) return false;
        i++;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPrime(num))
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;
    return 0;
}
