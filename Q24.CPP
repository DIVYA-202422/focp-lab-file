#include <iostream>
using namespace std;

bool oppositeSigns(int x, int y) {
    return (x ^ y) < 0;
}

int main() {
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;
    cout << "The numbers " << x << " and " << y << (oppositeSigns(x, y) ? " have " : " do not have ") << "opposite signs." << endl;
    return 0;
}
