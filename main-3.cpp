#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"
#include "Mine.h"
#include "Ship.h"
#include "Explosion.h"
#include <vector>
#include "Game.h" 
#include <iostream>

int main() {
  Game game;
  
  std::vector <GameEntity*> entities = game.initGame(5,5,10,10);

  game.gameLoop(3,3);

  std::cout << "Game simulation completed!" << std::endl;

}