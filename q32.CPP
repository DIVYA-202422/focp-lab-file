#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    if (n < 2) {
        cout << "Array must have at least two elements." << endl;
        return 0;
    }
    
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int largest = arr[0], secondLargest = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if ((arr[i] > secondLargest || secondLargest == largest) && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    
    if (secondLargest == largest) {
        cout << "No second largest element found (all elements are the same)." << endl;
    } else {
        cout << "The second largest element is: " << secondLargest << endl;
    }
    
    return 0;
}