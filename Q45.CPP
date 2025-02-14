#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return original == reversed;
}

int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return reversed;
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num)) {
        cout << "The number is already a palindrome!" << endl;
        return 0;
    }

    num = reverseNumber(num);
    cout << "Reversed Number: " << num << endl;
    
    if (isPalindrome(num)) {
        cout << "Palindrome reached! Terminating early." << endl;
    } else {
        cout << "The reversed number is not a palindrome." << endl;
    }
    
    return 0;
}
