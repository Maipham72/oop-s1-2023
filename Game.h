#ifndef GAME_H
#define GAME_H
#include <vector>
#include <tuple>
#include "GameEntity.h"

class Game {
  private:
    std::vector<GameEntity*> entities;

  public:
    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight);
    
    std::vector<GameEntity*> get_entities();

    void set_entities(std::vector<GameEntity*> entities);

    void gameLoop(int maxIterations, double mineDistanceThreshold);
};

#endif