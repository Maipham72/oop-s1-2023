#include <iostream>
#include <tuple>
#include "Cell.h"
#include "Effect.h"
#include "Utils.h"
#include "Trap.h"
#include "Character.h"
#include <vector>
#include "Game.h"

int main() {
  Game game;

  game.initGame(2,2,10,10);
  game.gameLoop(2,2);
  return 0;
}
