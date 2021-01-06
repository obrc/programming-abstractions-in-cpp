#include <string>
#include "direction.h"
using namespace std;

Direction leftFrom(Direction dir) {
    return  Direction((dir + 3) % 4);
}

Direction rightFrom(Direction dir) {
    return Direction((dir + 1) % 4);
}

string directionToString(Direction dir) {
    switch (dir) {
    case NORTH: return "NORTH";
    case EAST: return "EAST";
    case WEST: return "WEST";
    case SOUTH: return "SOUTH";
    default: return "???";
    }
}
