#ifndef GAME_H
#define GAME_H
#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"
#include "Mine.h"
#include "Ship.h"
#include "Explosion.h"
#include <vector>

class Game {
  private:
    std::vector<GameEntity*> entities;
  
  public:
    std::vector<GameEntity*> get_entities() {
      return entities;
    }

    void set_entities(std::vector<GameEntity*> entities) {
      this->entities = entities;
    }

    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight) {
      for (int i = 0; i < numShips; i++) {
        std::tuple<int,int> shipPos = Utils::generateRandomPos(gridWidth, gridHeight);

        Ship* tempShip = new Ship(std::get<0>(shipPos), std::get<1>(shipPos));

        this->entities.push_back(tempShip);
      }

      for (int i = 0; i < numMines; i++) {
        std::tuple<int, int> minePos = Utils::generateRandomPos(gridHeight,gridWidth);

        Mine* tempMine = new Mine (std::get<0>(minePos), std::get<1>(minePos));

        this->entities.push_back(tempMine);
      }

      return entities;
    }
  
    void gameLoop(int maxIternation, double mineDistanceThreshold) {
      for (int i =0; i<maxIternation; i++) {
        for (auto *entity: entities) {
          if (entity->getType() == 'S') {
            Ship* ship = dynamic_cast<Ship*>(entity);
            ship->move(1,0);

            for (auto *otherEntity : entities) {
              if (otherEntity->getType() == 'M') {
                Mine* mine = dynamic_cast<Mine*> (otherEntity);

                if (Utils::calculateDistance(ship->getPos(),mine->getPos()) < mineDistanceThreshold) {
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

