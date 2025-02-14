#include <iostream>
using namespace std;

int main() {
    string input;
    int num, sum = 0, count = 0, maxNum, minNum;
bool firstEntry = true; // To handle initial min/max values
    
    cout << "Enter integers (type 'exit' to stop):" << endl;
    
    while (true) {
        cin >> input;
        
        if (input == "exit") break;
        
        try {
            num = stoi(input);
            sum += num;
            if (firstEntry) {
                maxNum = minNum = num;
                firstEntry = false;
            }
            count++;
            if (num > maxNum) maxNum = num;
            if (num < minNum) minNum = num;
        } catch (exception &e) {
            cout << "Invalid input, please enter an integer or 'exit' to stop." << endl;
        }
    }
    
    if (count > 0) {
        cout << "Sum: " << sum << endl;
        cout << "Count: " << count << endl;
        cout << "Max: " << maxNum << endl;
        cout << "Min: " << minNum << endl;
    } else {
        cout << "No valid integers entered." << endl;
    }
    
    return 0;
}
