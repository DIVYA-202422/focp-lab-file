#include <iostream>
using namespace std;

int main() {
    double balance = 1000.0, amount;
    int choice;
    
    do {
        cout << "\nATM Machine";
        cout << "\n1. Withdrawal";
        cout << "\n2. Deposit";
        cout << "\n3. Balance Inquiry";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > balance) {
                    cout << "Insufficient balance.";
                } else if (amount <= 0) {
                    cout << "Invalid amount.";
                } else {
                    balance -= amount;
                    cout << "Withdrawal successful. Remaining balance: " << balance;
                }
                break;
            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                if (amount <= 0) {
                    cout << "Invalid amount.";
                } else {
                    balance += amount;
                    cout << "Deposit successful. New balance: " << balance;
                }
                break;
            case 3:
                cout << "Current balance: " << balance;
                break;
            case 4:
                cout << "Exiting...";
                break;
            default:
                cout << "Invalid choice. Try again.";
        }
    } while (choice != 4);
    
    return 0;
}
