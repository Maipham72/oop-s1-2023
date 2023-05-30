#ifndef SHIP_H
#define SHIP_H
#include <tuple>

#include "GameEntity.h"

class Ship : public GameEntity {
 public:
  Ship(int x, int y) : GameEntity(x, y, 'S') {}

  void move(int dx, int dy) {
    int x;
    int y;
    x += dx;
    y += dy;
    std::tuple<int, int> newPos(x, y);
  }
};

#endif