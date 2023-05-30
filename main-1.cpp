#include <iostream>
#include <tuple>

#include "Effect.h"
#include "GameEntity.h"
#include "Utils.h"

int main() {
  int gridHeight = 10;
  int gridWeight = 10;

  std::tuple<int, int> pos1 = Utils::generateRandomPos(gridWeight, gridHeight);

  std::tuple<int, int> pos2 = Utils::generateRandomPos(gridWeight, gridHeight);

  std::tuple<int, int> pos3 = Utils::generateRandomPos(gridWeight, gridHeight);

  double distance1 = Utils::calculateDistance(pos1, pos2);

  double distance2 = Utils::calculateDistance(pos1, pos3);

  double distance3 = Utils::calculateDistance(pos2, pos3);

  std::cout << "Position 1: " << std::get<0>(pos1) << ", " << std::get<1>(pos1) << std::endl;

  std::cout << "Position 2: " << std::get<0>(pos2) << ", " << std::get<1>(pos2) << std::endl;

  std::cout << "Position 3: " << std::get<0>(pos3) << ", " << std::get<1>(pos3) << std::endl;

  std::cout << "Distance between postion 1 and postion 2:" << distance1 << std::endl;

  std::cout << "Distance between postion 1 and postion 3:" << distance2 << std::endl;

  std::cout << "Distance between postion 2 and postion 3:" << distance3 << std::endl;

  return 0;
}