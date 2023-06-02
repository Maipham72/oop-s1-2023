#ifndef GAME_H
#define GAME_H
#include "Effect.h"
#include "GameEntity.h"
#include "Utils.h"
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"
#include <tuple>
#include <vector>

class Game {
  private:
    std::vector<GameEntity*> entities;

  public:
    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWeight, int gridHeight) {
      for (int i = 0; i < numShips; i++) {
        std::tuple<int, int> shipPos = Utils::generateRandomPos(gridWeight, gridHeight);
        Ship* tempShip = new Ship(std::get<0>(shipPos), std::get<1>(shipPos));

        this->entities.push_back(tempShip);
      }

      for (int i = 0; i< numMines; i++) {
        std::tuple<int, int> minePos = Utils::generateRandomPos(gridWeight, gridHeight);

        Mine* tempMine = new Mine(std::get<0>(minePos), std::get<1>(minePos));

        this->entities.push_back(tempMine);
      }

      return entities;
    }

    std::vector<GameEntity*> get_entities() {
      return entities;
    }

    void set_entities(std::vector<GameEntity*> entities) {
      this->entities = entities;
    }

    void gameLoop(int maxIterations, double mineDistanceThreshold) {
      for (int i = 0; i < maxIterations; i++) {
        for (auto *entity: entities) {
          if (entity->getType() == 'S') {
            Ship* ship = dynamic_cast<Ship*>(entity);
            ship->move(1,0);

            for (auto *otherEntity: entities) {
              if (otherEntity->getType() == 'M') {
                Mine* mine = dynamic_cast<Mine*>(otherEntity);
                
                if (Utils::calculateDistance(ship->getPos(), mine->getPos()) < mineDistanceThreshold) {
                  Explosion explosion = mine->explode();

                  explosion.apply(*ship);
                  break; 
                }
              }
            }
          }
        }
      }
    }
};

#endif