/*
 * content
 * exercise count line
 * exercise count word
 */
#include <iostream>
#include <fstream>
#include "console.h"

using namespace std;

int main() {
    fstream input;
    input.open("data.txt");
    if (input.fail())
        cout << "open file fail" << endl;
    int countLine = 0;
    string line;
    while(getline(input, line)) {
        cout << "This is new line: " << line << endl;
        countLine++;
    }
    cout << "Total " << countLine << " lines" << endl;
    input.close();
    input.open("data.txt");
    int countWord = 0;
    string token;
    while(input >> token) {
        cout << "This is new word: " << token << endl;
        countWord++;
    }
    cout << "Total " << countWord << " wrods" << endl;
    input.close();
    return 0;
}
