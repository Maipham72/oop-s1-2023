#include "Helicopter.h"
#include "AirCraft.h"
#include <iostream>

int main() {
  Helicopter helicopter(200, "Mai");
  helicopter.fly(5690,45);
  std::cout << helicopter.get_fuel() << std::endl;
}