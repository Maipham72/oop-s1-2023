#ifndef EXPLOSION_H
#define EXPLOSION_H
#include "GameEntity.h"
#include "Effect.h"
#include <tuple>

class Explosion: public GameEntity, public Effect {
  public:
    //class GameEntity;
    Explosion(int x, int y);
    void apply(GameEntity& entity);
};
#endif