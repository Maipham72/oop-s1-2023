#include <tuple>
#include <iostream>
#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"
#include "Mine.h"
#include "Ship.h"
#include "Explosion.h"

int main(){
  Ship ship(1,2);
  Mine mine(3,3);

  std::cout << "Ship pos: " << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << std::endl;

  ship.move(1,1);

  std::cout << "Ship pos: " << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << std::endl;

  std::cout << "Mine pos: " << std::get<0>(mine.getPos()) << ", " << std::get<1>(mine.getPos()) << std::endl;

  Explosion explosion = mine.explode();

  std::cout << "Mine new type: " << mine.getType() << std::endl;

  Explosion explosion2(2,2);
  
  explosion2.apply(ship);

  std::cout << "Ship pos after: " << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << std::endl;


  return 0;


  



}