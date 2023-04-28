#include "AirCraft.h"
#include <iostream>

int main() {
  AirCraft* aircraft = new AirCraft(100);
  ;
  std::cout << aircraft.fly(100,20) << std::endl;
}