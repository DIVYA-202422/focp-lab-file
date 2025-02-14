#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int nextPrime(int num) {
    while (true) {
        num++;
        if (isPrime(num)) return num;
    }
}

void printFactors(int num) {
    cout << "Factors of " << num << " are: ";
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (isPrime(n)) {
        cout << n << " is a prime number.\n";
        cout << "Next prime number is: " << nextPrime(n) << endl;
    } else {
        cout << n << " is not a prime number.\n";
        printFactors(n);
    }

    return 0;
}
