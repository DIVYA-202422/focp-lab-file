#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int originalNum = num, sum = 0, digits = 0;
    
    // Count the number of digits
    for (int temp = num; temp > 0; temp /= 10) {
        digits++;
    }
    
    // Calculate the sum of the digits raised to the power of the number of digits
    for (int temp = num; temp > 0; temp /= 10) {
        sum += pow(temp % 10, digits);
    }
    
    return sum == originalNum;
}

int main() {
    int start, end;
    
    cout << "Enter the range (start and end): ";
    cin >> start >> end;
    
    cout << "Armstrong numbers in the range " << start << " to " << end << ": ";
    
    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            cout << i << " ";
        }
    }
    
    cout << endl;
    return 0;
}