/*
 * Content
 * function declare
 * function prototype
 * function parameter
 *  values parameter
 *  reference parameter
 * defalut parameter
 * ouput parameter
 * quadratic excercise
 *
 */

#include <iostream>
using namespace std;

void drawLine(int width = 5, char c = '*') {
    for (int i = 0; i < width; i++) {
        cout << c;
    }
    cout << endl;
}

int main() {
    drawLine();
    drawLine(10);
    drawLine(7,'?');
    drawLine('x');
    cout << (int) 'x';
    //(int)'x' == 120
    // defalut parameter is base on position
    //************************************************************************************************************************
    return 0;
}
