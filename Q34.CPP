#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2;
    
    do {
        cout << "\nMenu:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\nChoose: ";
        cin >> choice;
        
        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }
        
        switch (choice) {
            case 1: cout << "Result: " << num1 + num2 << endl; break;
            case 2: cout << "Result: " << num1 - num2 << endl; break;
            case 3: cout << "Result: " << num1 * num2 << endl; break;
            case 4: cout << (num2 != 0 ? "Result: " + to_string(num1 / num2) : "Error: Division by zero!") << endl; break;
            case 5: cout << "Exiting..." << endl; break;
            default: cout << "Invalid choice!" << endl;
        }
    } while (choice != 5);
    
    return 0;
}
