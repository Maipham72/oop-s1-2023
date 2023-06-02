#include <iostream>
#include <tuple>
#include "Cell.h"
#include "Effect.h"
#include "Utils.h"

int main() {
  int gridWidth = 10;
  int gridHeight = 10;

  std::tuple<int, int> pos1 = Utils::generateRandomPos(gridWidth, gridHeight);

  std::tuple<int, int> pos2 = Utils::generateRandomPos(gridWidth, gridHeight);

  std::tuple<int, int> pos3 = Utils::generateRandomPos(gridWidth, gridHeight);

  std::cout << "Position 1: " << std::get<0>(pos1) << ", " << std::get<1>(pos1) << std::endl;

  std::cout << "Position 2: " << std::get<0>(pos2) << ", " << std::get<1>(pos2) << std::endl;

  std::cout << "Position 3: " << std::get<0>(pos3) << ", " << std::get<1>(pos3) << std::endl;

  double distance1 = Utils::calculateDistance(pos1, pos2);

  double distance2 = Utils::calculateDistance(pos1, pos3);

  double distance3 = Utils::calculateDistance(pos2, pos3);

  std::cout << "Distance between 1 and 2" << distance1 << std::endl;

  std::cout << "Distance between 1 and 3" << distance2 << std::endl;

  std::cout << "Distance between 2 and 3" << distance3 << std::endl;

  return 0;

}