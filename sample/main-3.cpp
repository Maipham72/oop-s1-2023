#include "Game.h"
#include "Effect.h"
#include "GameEntity.h"
#include "Utils.h"
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"
#include <tuple>
#include <iostream>
#include <vector>

int main() {
  Game game;
  
  std::vector<GameEntity*> entities = game.initGame(4,3,10,10);

  game.gameLoop(3,3);

  std::cout << "Game simulation completed!" << std::endl;
  
}