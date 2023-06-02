#ifndef UTILS_H
#define UTILS_H
#include "GameEntity.h"
#include <tuple>
#include <random>
#include <cmath>

class Utils {
  public:
    static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight) {
      int x = rand() % gridWidth +1;
      int y = rand() % gridHeight +1;
      return std::make_tuple(x,y);
    }

    static double calculateDistance (std::tuple<int, int> pos1, std::tuple<int, int> pos2) {
      double disSquared = pow(std::get<0>(pos1) - std::get<0>(pos2),2) + pow(std::get<1>(pos1) - std::get<1>(pos2),2);

      double distance = sqrt(disSquared);

      return distance;
    }
};

#endif