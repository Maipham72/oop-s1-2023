#include "Ship.h"
#include "GameEntity.h"
#include <tuple>

Ship::Ship(int x, int y): GameEntity::GameEntity(x,y, 'S') {}

void Ship::move(int dx, int dy) {
  int x;
  int y;
  x += dx;
  y += dy;
  std::tuple<int, int> newPos (x,y);
}
