#include <tuple>
#include <iostream>
#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"

int main() {
  int gridHeight = 10;
  int gridWeight = 10;
  std::tuple<int,int> pos1 = Utils::generateRandomPos(gridWeight, gridHeight);

  std::tuple<int,int> pos2 = Utils::generateRandomPos(gridWeight, gridHeight);

  std::cout << std::get<0>(pos1) << ", " << std::get<1>(pos1) << std::endl;

  std::cout << std::get<0>(pos2) << ", " << std::get<1>(pos2) << std::endl;

  double distance = Utils::calculateDistance(pos1,pos2);

  std::cout << distance << std::endl;
}
