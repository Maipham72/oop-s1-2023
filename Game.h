#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <tuple>
#include "Cell.h"
#include "Effect.h"
#include "Utils.h"
#include "Trap.h"
#include "Character.h"
#include <vector>

class Game {
  private:
    std::vector<Cell*> grid;

  public:
    //Game();

    std::vector<Cell*>& getGrid() {
      return grid;
    }

    void setGrid(std::vector<Cell*>&) {
      this->grid = grid;
    }

    std::vector<Cell*> initGame(int numCharacters, int numTraps, int gridWidth, int gridHeight) {
      for (int i = 0; i < numCharacters; i++) {
        std::tuple<int, int> character  = Utils::generateRandomPos(gridWidth, gridHeight);

        Character* tempChar = new Character(std::get<0>(character), std::get<1>(character));

        this->grid.push_back(tempChar);
      }

      for (int i = 0; i < numTraps; i++) {
        std::tuple<int, int> traps = Utils::generateRandomPos(gridWidth, gridHeight);

        Trap* tempTrap = new Trap(std::get<0>(traps), std::get<1>(traps));

        this->grid.push_back(tempTrap);
      }

      return grid;
    }

    void gameLoop(int maxIterations, double trapActivationDistance) {
      int gridWidth = grid.size();
      int gridHeight = grid.size();
      std::make_tuple(gridWidth,gridHeight);
      int iteration = 0;
      for (int i =0; i< maxIterations; i++) {
        for (auto *object: grid) {
          if (object->getType() == 'C') {
            Character* character = dynamic_cast<Character*>(object); 

            character->move(1,0);

            for (auto *otherObject: grid) {
              if (object->getType() == 'T') {
                Trap* trap = dynamic_cast<Trap*>(otherObject);

                if(Utils::calculateDistance(character->getPos(), trap->getPos()) < trapActivationDistance) {
                  trap->apply(*character);break;
                }
              }
            }
            if (character->getPos() > std::make_tuple(gridWidth,gridHeight)) {
              std::cout << "Character has won the game" << std::endl;
              break;

            }
          }
        }

        iteration++;

        if (iteration == maxIterations) {
          std::cout << "Maximum number of iterations reached. Game over" << std::endl;
          break;
        }
      }
    }
};

#endif