#include "GameEntity.h"
#include <iostream>
#include <tuple>

GameEntity::GameEntity(int x, int y, char type): position(std::make_tuple(x,y)), type(type) {}

std::tuple<int, int> GameEntity::getPos() {
  return position;
}

char GameEntity::getType() {
  return type;
}

// void GameEntity::setType(){
//   this->type = type;
// }

// void GameEntity::setPos(int x, int y) {
//   this->position = std::make_tuple(x,y);
// }

