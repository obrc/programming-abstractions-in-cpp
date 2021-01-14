#include <cstdlib>
#include <cmath>
#include <ctime>
#include "testrandom.h"

#include <iostream>
#include "console.h"
using namespace std;

void initRandomSeed() {
    static bool flag = false; // only one copy available shared with all calls to initRandomSeed
    if (!flag) {
        srand((int)time(NULL));
        flag = true;
    }
}
/**
 * @brief getNormalization
 * @return a random real in [0,1)
 * initial call to rand get a random integer from 0 to RAN_MAX
 * normalize it to [0, 1)
 */
double getNormalization(){
    return rand() / ((double) RAND_MAX + 1); // because RAND_MAX usually is the max int
}

int randomInteger(int low, int high) {
    initRandomSeed();
    double d = getNormalization() * ((double) high - low + 1); // add one for reach the high
    return floor(low + d);
}

double randomReal(double low, double high) {
    initRandomSeed();
    double d = getNormalization() * (high - low);
    return low + d;
}

bool randomChance(double p) {
    if (randomReal(0,1) < p)
        return true;
    else
        return false;
}

void setRandomSeed(int seed) {
    initRandomSeed();
    srand(seed);
}
