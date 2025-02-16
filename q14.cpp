#include <iostream>
using namespace std;
int main() {
    double a, b, c;
   cout << "Enter the lengths of three sides of a triangle: ";
    cin >> a >> b >> c;
 if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            cout << "The triangle is Equilateral.\n";
        } else if (a == b || b == c || a == c) {
            cout << "The triangle is Isosceles.\n";
        } else {
            cout << "The triangle is Scalene.\n";
        }
    } else {
        cout << "The given sides do not form a valid triangle.\n";
    }
   return 0;
}
