#include <iostream>
#include <stdexcept> 
#include <cmath>      
using namespace std;

int integerDivision(int dividend, int divisor) {
    if (divisor == 0) throw invalid_argument("Cannot divide by zero");
    int quotient = 0;
    int sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1;
    dividend = abs(dividend);
    divisor = abs(divisor);
    while (dividend >= divisor) {
        dividend -= divisor;
        quotient++;
    }
    return sign * quotient;
}

double floatingPointDivision(int dividend, int divisor, int precision = 6) {
    if (divisor == 0) throw invalid_argument("Cannot divide by zero");
    
    int sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1;
    dividend = abs(dividend);
    divisor = abs(divisor);

  
    double result = integerDivision(dividend, divisor);
    int remainder = dividend % divisor;  
    
 
    double factor = 0.1;
    for (int i = 0; i < precision; i++) {
        remainder *= 10;
        result += (integerDivision(remainder, divisor)) * factor;
        remainder = remainder % divisor; 
        factor /= 10;
    }
    
    return sign * result;
}

int main() {
    int dividend = 10, divisor = 3;
    cout << "Integer Division: " << integerDivision(dividend, divisor) << endl;
    cout << "Floating Point Division: " << floatingPointDivision(dividend, divisor) << endl;
    return 0;
}
