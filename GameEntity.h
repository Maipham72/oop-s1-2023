#ifndef GAMEENTITY_H
#define GAMEENTITY_H
#include <tuple>
#include <iostream>
#include "Effect.h"

class GameEntity {
  protected:
    std::tuple<int, int> position;
    char type;

  public:
    GameEntity(int x, int y, char type);
    std::tuple<int, int> getPos();
    char getType();
    //void apply(GameEntity& entity);
    // void setType();
    // void setPos(int x, int y);

};

#endif