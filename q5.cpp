#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int n = 1;
    double principal, rate, time, amount, compound_interest;
    
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the annual interest rate (in percentage): ";
    cin >> rate;
    cout << "Enter the time period (in years): ";
    cin >> time;
    
    rate = rate / 100;
    amount = principal * pow((1 + rate / n), n * time);
    compound_interest = amount - principal;
    
    cout << "\nCompound Interest: " << fixed << compound_interest << endl;
    cout << "Total Amount: " << fixed << amount << endl;
    
    return 0;
}
