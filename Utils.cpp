#include "Utils.h"
#include <tuple>
#include <random>
#include <cmath>

 std::tuple<int,int> Utils::generateRandomPos(int gridWidth, int gridHeight) {
  int a = rand() % gridHeight -1 ;
  int b = rand() % gridWidth -1;
  std::tuple<int, int> position (a,b);
  return position;
}

double Utils::calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2) {
  double distance = 0;
  double distanceSquare = pow((std::get<0>(pos1) - std::get<0>(pos2)),2) + pow((std::get<1>(pos1) - std::get<1>(pos2)),2);
  distance = sqrt(distanceSquare);
  return distance;
}

