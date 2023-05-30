#include "Explosion.h"
#include "GameEntity.h"

Explosion::Explosion(int x, int y): GameEntity(x,y, 'E') {}

void Explosion::apply(GameEntity& entity) {
  entity = GameEntity(-1, 1, 'X');
}
