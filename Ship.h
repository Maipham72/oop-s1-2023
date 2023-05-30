#ifndef SHIP_H
#define SHIP_H
#include "GameEntity.h"
#include <tuple>

class Ship : public GameEntity {
  public:
    Ship(int x, int y);
    void move(int dx, int dy);
};

#endif