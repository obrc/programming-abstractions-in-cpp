/*
 * content
 * cmath usage
 * abs
 * ceil
 * floor
 * log10
 * max
 * min
 * pow
 * round
 * sqrt
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double pi = -3.1415926;
    pi = abs(pi);
    cout << pi << endl;
    cout << "ceil of pi is " << ceil(pi) << ", ";
    cout << "floor of pi is " << floor(pi) << ", ";
    cout << "round of pi is " << round(pi) << endl;
    double x = 10;
    x = pow(x, 12);
    x = log10(x);
    cout << x << endl;
    cout << "max{" << pi << "," << x << "} = " << max(x, pi) << endl;
    cout << "min{" << pi << "," << x << "} = " << min(x, pi) << endl;
    cout << "square root of 2 is " << sqrt(2) << endl;
    return 0;
}
