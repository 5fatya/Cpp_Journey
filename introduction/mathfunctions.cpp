#include <iostream>
#include <cmath>
int main() {
    int x = -5;
    int absoluteValue = abs(x); // function of absolute value is abs()
    cout << "Absolute value of " << x << " is: " << absoluteValue << std::endl;
   
   double p = 25.0;
   double squareRoot = sqrt(p); // the function for square root is sqrt()
cout << "square root of " << p << "is" << squareRoot << endl;

double m = 27.0;
double cubeRoot = cbrt(m); // function for cube root is cbrt()
cout << "cube root of " << m << " is " << cubeRoot << endl;

int f = 2;
int j = 3;

int result = pow(f, j); // pow(f, j) this function multiplies x to the power of y 
cout << "result of " << f << " to the power of " << j << " is:" << result << endl;

double e = 1.0; 
double result2 = exp(e); // function that multiples the value 2.718 to the power of x 
cout << "result of e to the power of " << e << " is " << result2 << endl;

    return 0;
}

