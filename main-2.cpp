#include <iostream>
#include <tuple>
#include "Ship.h"
#include "Mine.h"
#include "Effect.h"
#include "GameEntity.h"
#include "Utils.h"

int main() {
  Ship ship(1,1);
  Mine mine(2,3);

  std::cout << "Ship position before move: " << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << std::endl;

  ship.move(4,-2);

  std::cout << "Ship position after move: " << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << std::endl;

  std::cout << "Mine's position: " <<std::get<0>(mine.getPos()) << ", " << std::get<1>(mine.getPos()) << std::endl;

  Explosion explosion = mine.explode();

  std::cout << "Mine exploded!" << std::endl;

  std::cout << "Mine's new type: " << mine.getType() << std::endl;

  Explosion explosion2(5,5);

  std::cout << "Ship's position before explosion: " << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << std::endl;

  explosion2.apply(ship);

  std::cout << "Ship's position after explotion: " << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << std::endl;

  return 0;

}