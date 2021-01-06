#ifndef _DIRECTION_H
#define _DIRECTION_H

#include <string>

enum Direction {NORTH, EAST, SOUTH, WEST};

Direction leftFrom(Direction dir);

Direction rightFrom(Direction dir);

std::string DirectionToString(Direction dir);

#endif // _DIRECTION_H
