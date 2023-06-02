#ifndef UTILS_H
#define UTILS_H
#include "Cell.h"
#include <tuple>
#include <cmath>
#include <random>

class Utils {
  public:
    static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight) {

      int x = rand() % gridWidth - 3;
      int y = rand() % gridHeight - 6;

      return std::make_tuple(x,y);
    }

    static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2) {
      double distanceSquared = pow(std::get<0>(pos1) - std::get<0>(pos2),2) + pow(std::get<1>(pos1) - std::get<1>(pos2),2);

      double distance = sqrt(distanceSquared);

      return distance;
    }
};

#endif