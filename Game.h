#ifndef GAME_H
#define GAME_H
#include <tuple>
#include <vector>
#include "GameEntity.h"
#include "Utils.h"
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"


using namespace std;

class Game {
 private:
  std::vector<GameEntity*> entities;

 public:
  vector<GameEntity*> get_entities() { return entities; }

  void set_entities(vector<GameEntity*> entities) {
    this->entities = entities;
  }

  std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight) {
    for (int i = 0; i < numShips; i++) {
      tuple<int, int> posShip = Utils::generateRandomPos(gridWidth, gridHeight);
      Ship* tempShip = new Ship(get<0>(posShip), get<1>(posShip));
      this->entities.push_back(tempShip);
    }

    for (int i = 0; i < numMines; i++) {
      tuple<int, int> posMine = Utils::generateRandomPos(gridWidth, gridHeight);
      Mine* tempMine = new Mine(get<0>(posMine), get<1>(posMine));
      this->entities.push_back(tempMine);
    }

    return entities;
  }

  void gameLoop(int maxIterations, double mineDistanceThreshold) {
    //int iteration = 0;
    //while (iteration < maxIterations) {
    for (int i = 0; i < maxIterations; i++) {
      for (auto *entity : entities) {
        if (entity->getType() == 'S') {
          Ship* ship = dynamic_cast<Ship*>(entity);
          ship->move(1, 0);

          for (auto *otherEntity : entities) {
            if (otherEntity->getType() == 'M') {
              Mine* mine = dynamic_cast<Mine*>(otherEntity);
              if (Utils::calculateDistance(ship->getPos(), mine->getPos()) <
                  mineDistanceThreshold) {
                Explosion explosion = mine->explode();
                explosion.apply(*ship);
                break;
            }
          }
        }
        }
      }
    }
    //iteration++;
  //}
  }
};

#endif