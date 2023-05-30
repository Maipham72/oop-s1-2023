#include "Game.h"
#include <iostream>

int main() {
  Game game;
  game.initGame(2, 2, 10, 10);
  std::cout << std::endl;
  game.gameLoop(3, 3);
}