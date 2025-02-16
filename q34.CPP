#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;
    
    int arr[rows][cols];
    
    cout << "Enter elements of the 2D array: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }
    
    cout << "Formatted 2D Array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
