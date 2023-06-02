#include "Effect.h"
#include "GameEntity.h"
#include "Utils.h"
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"
#include <tuple>
#include <iostream>

int main() {
  Ship ship(2,3);
  Mine mine(1,2);

  std::cout << "Ship position before: " << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << std::endl;

  ship.move(1,1);

  std::cout << "Ship position after: " << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << std::endl;


  std::cout << "Mine position before: " << std::get<0>(mine.getPos()) << ", " << std::get<1>(mine.getPos()) << std::endl;

  Explosion explosion = mine.explode();

  std::cout << "Mine exploded!" << std::endl;

  std::cout << "Mine's new type: " << mine.getType() << std::endl;

  Explosion explosion2(2,2);

  std::cout << "Ship position before explosion: " << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << std::endl;

  explosion2.apply(ship);

  std::cout << "Ship position after explosion: " << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << std::endl;

  return 0;
}
