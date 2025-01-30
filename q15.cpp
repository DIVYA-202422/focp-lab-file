#include <iostream>
using namespace std;
int main() {
    int a, b, c, d, result;
 cout << "Enter values for a, b, c, and d: ";
 cin >> a >> b >> c >> d;
result = (a ^ b) + (c & d);
  cout << "Result of (a^b + c&d) is: " << result << endl;
 return 0;
}


