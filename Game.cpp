#include "Game.h"

#include <tuple>
#include <vector>

#include "Mine.h"
#include "Ship.h"
#include "Utils.h"
using namespace std;

vector<GameEntity*> Game::get_entities() { return entities; }

void Game::set_entities(vector<GameEntity*> entities) {
  this->entities = entities;
}

std::vector<GameEntity*> Game::initGame(int numShips, int numMines,
                                        int gridWidth, int gridHeight) {
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

void Game::gameLoop(int maxIterations, double mineDistanceThresHold) {
  bool allShipDestroyed = false;
  int iteration = 0;
  while (iteration < maxIterations || allShipDestroyed != true) {
    for (int i = 0; i < entities.size(); i++) {
      Ship* ship = dynamic_cast<Ship*>(this->entities.at(1));
      if (ship->getType() == 'S') {
        ship->move(1, 0);
      }
      for (int j = 0; j < entities.size(); j++) {
        Mine* mine = dynamic_cast<Mine*>(this->entities.at(j));
        if (mine->getType() == 'M')
        {
          if (Utils::calculateDistance(ship->getPos(), mine->getPos()) < mineDistanceThresHold) {
              Explosion explosion = mine->explode();
              explosion.apply(*ship);
              break;
            }
        }
      }
    }
  }
}


