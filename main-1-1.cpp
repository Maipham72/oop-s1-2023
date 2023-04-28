#include "AirCraft.h"
#include <iostream>

int main() {
  AirCraft* aircraft = new AirCraft(100);
  aircraft->fly(100,20);
  aircraft->refuel();

  std::cout << aircraft->get_fuel() << std::endl;

  return 0;

}