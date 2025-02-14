#include <iostream>
using namespace std;

int main() {
    string str, cleanedStr = "", reversedStr = "";
    char replacementChar = '*';

    cout << "Enter a string: ";
    getline(cin, str);

    for (char c : str) {
        if (c != ' ') {  // Ignore spaces
            if (c >= 'A' && c <= 'Z') {
                c = c + ('a' - 'A');  // Convert uppercase to lowercase
            }
            cleanedStr += c;
        }
    }

    reversedStr = string(cleanedStr.rbegin(), cleanedStr.rend());

    if (cleanedStr == reversedStr) {
        cout << "The string is a palindrome.\n";
    } else {
        cout << "The string is not a palindrome.\n";
    }

    int freq[26] = {0}; 

    for (char c : str) {
        if (c >= 'A' && c <= 'Z') {
            c = c + ('a' - 'A');  
        }
        if (c >= 'a' && c <= 'z') {
            freq[c - 'a']++;
        }
    }

    cout << "Character frequencies:\n";
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << char(i + 'a') << ": " << freq[i] << endl;
        }
    }

    for (char &c : str) {
        char lower = (c >= 'A' && c <= 'Z') ? c + ('a' - 'A') : c;  // Convert manually

        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            c = replacementChar;
        }
    }

    cout << "String after replacing vowels: " << str << endl;

    return 0;
}
