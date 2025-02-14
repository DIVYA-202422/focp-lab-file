#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    
    cout << "Numbers between 1 and 500 (skipping those divisible by both 3 and 7, stopping if sum exceeds 1000):" << endl;
    
    for (int num = 1; num <= 500; num++) {
        if (num % 3 == 0 && num % 7 == 0) {
            continue;
        }
        
        if (sum + num > 1000) {
            break;
        }
        
        cout << num << " ";
        sum += num;
    }
    
    cout << "\nSum of printed numbers: " << sum << endl;
    return 0;
}