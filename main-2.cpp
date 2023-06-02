#include <iostream>
#include <tuple>
#include "Cell.h"
#include "Effect.h"
#include "Utils.h"
#include "Trap.h"
#include "Character.h"

int main() {
  Trap trap(2,3);
  Character character(1,4);

  std::cout << "Character position: " << std::get<0>(character.getPos()) << ", " << std::get<1>(character.getPos()) << std::endl;

  character.move(-1,-1);

  trap.apply(character);

    std::cout << "character type" << character.getType() <<  std::endl;


  std::cout << "Trap type" << trap.getType() << trap.isActive() << std::endl;

  return 0;
  


}